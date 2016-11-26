// 23/01/15 21:28

// SPOJ Permutations

#include<bits/stdc++.h>
using namespace std;
#define MAX 500
int dp[MAX][MAX];

int count(int n, int k){
	if(n == 0)
		return 0;
	if(k == 0)
		return 1;
	if(dp[n][k] != -1)
		return dp[n][k];
	int val = 0;
	for(int i = 0; i < n && k-i >= 0; i++)
		val += count(n-1,k-i);
	return (dp[n][k] = val);
}

int main(){
	int d,n,k;
	scanf("%d",&d);
	for(int i=0;i<MAX;++i){
		for(int j=0;j<MAX;++j){
			dp[i][j]=-1;
		}
	}
	while(d--){
		scanf("%d %d",&n,&k);
		printf("%d\n",count(n,k));
	}
	return 0;
}
