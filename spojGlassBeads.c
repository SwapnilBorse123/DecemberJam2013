// 16/12/14 19:30

// Program to solve the problem Glass Beads on SPOJ

#include<stdio.h>
#include<string.h>
#include<limits.h>

#define MAX 10002

int smallestLexi(char*,int,int,int);
int allSame(char*,int);

int main(){
	char str[2*MAX];
	int i=0,j,m=0,len,ind=0,tests,smallest = 0,temp;
	scanf("%d",&tests);
	while(tests--){
		scanf(" %[^\n]s",str);
		len = strlen(str);
		if(allSame(str,len)){
			printf("%d\n",1);
		}
		else{
			i=0;j = len;m=0;
			while(i<len){
				str[j] = str[i];
				i++;
				j++;
			}
			str[j] = '\0';
			smallest = 0;
			for(i=1;i<len;++i){
				m = smallestLexi(str,m,i,len);
			}
			printf("%d\n",m+1);	
		}
	}
	return 0;
}

int smallestLexi(char*str,int m,int n,int len){
	int temp1 = m,temp2 = n,count=0,tlen = len;
	len = len + n;
	while(n < len){
		if(str[m] < str[n]){
			return temp1;
		}
		else if(str[n] < str[m]){
			return temp2;
		}
		else{
			count++;
		}
		n++;m++;
	}
	if(count == tlen){
		return temp1;
	}
}

int allSame(char*str,int len){
	int i=1;
	for(i=1;i<len;++i){
		if(str[i-1]!=str[i]){
			return 0;
		}
	}
	return 1;
}
