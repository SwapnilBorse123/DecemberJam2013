// 16/12/14 15:42

// Program to solve the problem A Treat For The Cows on SPOJ

#include<stdio.h>
#include<stdlib.h>

#define MAX 2002
#define AMAX 1002

long int treat(long int n,long int dp[][n],long int*,long int,long int);
long int max(long int a,long int b);

int main(){
	long int n,i,j,dp[2002][2002],arr[1002];
	scanf("%d",&n);
	//memset(dp,-1,sizeof(dp[0][0])*2001*2001);
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			dp[i][j] = -1;
		}
	}
	for(i=0;i<n;++i){
		scanf("%ld",&arr[i]);
	}
	printf("%ld",treat(n,dp,arr,0,n-1));
	return 0;
}

long int treat(long int n,long int dp[][n],long int*arr,long int top,long int bottom){
	if(top>bottom){
		return 0;
	}
	if(dp[top][bottom]!=1){
		return dp[top][bottom];
	}
	int day = n+top-bottom;
	return dp[top][bottom] = max(day*arr[top]+treat(n,dp,arr,top+1,bottom),day*arr[bottom]+treat(n,dp,arr,top,bottom-1));
}

long int max(long int a,long int b){
	return(a>b?a:b);
}
