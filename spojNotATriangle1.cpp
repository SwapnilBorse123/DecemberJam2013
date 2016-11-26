// 30/12/14 01:34

// Program to solve the problem Not A Triangle on SPOJ

#include<bits/stdc++.h>

using namespace std;

#define MAX 200

int compare (const void * a, const void * b){
	return ( *(int*)a - *(int*)b );
}

int main(){
	int i,j,k,n,arr[MAX],dp[MAX][MAX];
	long int sum=0;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;++i){
			scanf("%d",&arr[i]);
		}
		qsort(arr,n,sizeof(int),compare);
		k=0;
		while(arr[k]<arr[0]+arr[1]){
			k++;
		}
		dp[0][0]=dp[0][1]=k;
		for(i=0;i<n-2;++i){
			for(j=i+1;j<n-1;++j){
				if(i==0) k=dp[i][j-1];
				else k = dp[i-1][j-1];
				if(j==k)k++;
				while(arr[k]<arr[i]+arr[j]){
					k++;
				}
				if(arr[k] == arr[i]+arr[j]) k++;
				sum += n-k;
				dp[i][j]=k;
			}
		}
		printf("%ld\n",sum);
		sum=0;
	}
	return 0;		
}
