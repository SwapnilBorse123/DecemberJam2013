// 07/01/15 14:39

// SPOJ Training for Final

#include<bits/stdc++.h>
using namespace std;
#define MAX 21
int max(int a,int b){
	return (a>b?a:b);
}
int main(){
	int i,j,n,m,x,y;
	scanf("%d %d",&n,&m);
	scanf("%d %d",&x,&y);
	x--;y--;
	int ip[n][m],dp[n][m]; // n rows and m columns
	//memset(dp,INT_MIN,sizeof(dp[0][0])*n*m);
	for(i=0;i<n;++i){
		for(j=0;j<m;++j){
			scanf("%d",&ip[i][j]);
		}
	}
	if(x==n-1 && y==m-1 && ip[x][y]>=0){
		printf("Y %d\n",ip[x][y]);
	}
	else{
		dp[x][y]=ip[x][y];
		for(i=x+1;i<n;i++){
			dp[i][y]=dp[i-1][y]-ip[i][y];
		}
		for(j=y+1;j<m;++j){
			dp[x][j]=dp[x][j-1]-ip[x][j];
		}
		for(i=x+1;i<n;++i){
			for(j=y+1;j<m;++j){
				dp[i][j]=max(dp[i][j-1],dp[i-1][j])-ip[i][j];
			}
		}
	}
	if(dp[n-1][m-1]>=0) printf("Y %d\n",dp[n-1][m-1]);
	else printf("N\n");
	return 0;
}
