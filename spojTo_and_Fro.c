// 12/12/14 16:24

// Program to solve the problem To and Fro on SPOJ

#include<stdio.h>
#include<string.h>

#define MAX 201

int main(){
	int n,i,j,len,ltor=1,ind=0;
	char arr[MAX][MAX],str[MAX];
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		ltor=1;
		scanf(" %[^\n]s",str);
		len = strlen(str);
		for(i=0;i<len/n;++i){
			if(ltor){
				for(j=0;j<n;++j){
					arr[i][j] = str[ind];
					ind++;
				}
				ltor = 0;
			}
			else{
				for(j=n-1;j>=0;--j){
					arr[i][j] = str[ind];
					ind++;
				}
				ltor = 1;
			}
		}
		for(j=0;j<n;++j){
			for(i=0;i<len/n;++i){
				printf("%c",arr[i][j]);
			}
		}
		printf("\n");
		ind = 0;
	}
	return 0;
}
