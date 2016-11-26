// 13/12/14 14:51

// Program to solve the problem Distinct Substring on SPOJ

#include<stdio.h>
#include<string.h>
#include<algorithm>

#define MAX 1005

void quicksort_strs(char const *args[], unsigned int len);
void swap_str_ptrs(char const **arg1, char const **arg2);
int lcp(char const*,char const*);

int main(){
	char str[MAX],*temp;
	unsigned int len,i,tests,ind=0,res=0;
	scanf("%d",&tests);
	while(tests--){
		scanf(" %[^\n]s",str);
		len = strlen(str);
		if(len == 0){
			printf("0\n");
		}
		else{
			char const * p[len];
			temp = str;
			while(*temp != '\0'){
				p[ind++] = temp;
				temp++;
			}
			quicksort_strs(p,len);
			res = strlen(p[0]);
			for(i=1;i<len;++i){
				res = res + strlen(p[i]) - lcp(p[i],p[i-1]);
			}
			ind=0;
			printf("%d\n",res);	
		}
	}
	return 0;
}

void quicksort_strs(char const *args[], unsigned int len){
    unsigned int i, pvt=0;
    if (len <= 1)
        return;
    // swap a randomly selected value to the last node
    swap_str_ptrs(args+((unsigned int)rand() % len), args+len-1);
    // reset the pivot index to zero, then scan
    for (i=0;i<len-1;++i){
        if (strcmp(args[i], args[len-1]) < 0)
            swap_str_ptrs(args+i, args+pvt++);
    }
    // move the pivot value into its place
    swap_str_ptrs(args+pvt, args+len-1);
    // and invoke on the subsequences. does NOT include the pivot-slot
    quicksort_strs(args, pvt++);
    quicksort_strs(args+pvt, len - pvt);
}

void swap_str_ptrs(char const **arg1, char const **arg2){
    const char *tmp = *arg1;
    *arg1 = *arg2;
    *arg2 = tmp;
}

int lcp(char const*str1,char const*str2){
	int i=0;
	while(str1[i]==str2[i]){
		i++;
	}
	return i;
}
