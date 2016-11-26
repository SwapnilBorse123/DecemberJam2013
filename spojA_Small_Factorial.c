// 02/12/14 16:29

// Program to solve the problem A Small Factorial on SPOJ

#include<stdio.h>
#include<stdlib.h>

#define MAX 100000


int main(){
	int arr[MAX]={0};
	int t,n,i=1,m=1,temp=0,noi=0,j=0,ind=0; // noi is number of iterations
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		arr[0] = 1; m = 1; i = 1; ind=0,temp=0;
		while(i<=n){
			while(ind < m){
				int tmp = i * arr[ind] + temp;
				arr[ind] = tmp%10;
				temp = tmp/10;
				ind++;	
			}
			while(temp > 0){
				arr[ind] = temp % 10;
				temp = temp / 10;
				ind++;
			}
			m = ind;
			ind = temp = 0;
			i++;
		}
		for(j=m-1;j >= 0;j--){
			printf("%d",arr[j]);
		}
		printf("\n");
	}
	return 0;
}
