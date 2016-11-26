// 18/02/15 21:56

// SPOJ WordCount

#include<bits/stdc++.h>
using namespace std;

int main(){
	char str[20005];
	int i,len,max=0,ccnt=0,tests;
	scanf("%d",&tests);
	while(tests--){
		scanf(" %[^\n]s",&str);
		len = strlen(str);
		if(len==0){
			printf("0\n");
		}
		else{
			int arr[1002],ind=0,wcnt=0;
			ccnt=0;max=0;
			for(i=0;i<=len;++i){
				if(str[i]==' '||str[i]=='\0'||str[i]=='\t'||str[i]=='\r'){
					arr[ind++]=ccnt;
					ccnt=0;
				}
				else{
					ccnt++;
				}
			}
			int temp = arr[0];wcnt=1;
			for(i=0;i<ind;++i){
				if(arr[i]==arr[i+1]){
					wcnt++;
				}
				else{
					if(wcnt>max){
						max = wcnt;
						wcnt=1;
					}
				}
			}
			printf("%d\n",max);	
		}
	}
	return 0;
}
