// 11/12/14 22:42

// Program to solve the problem Bitmap on SPOJ

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define ROW 183
#define COL 183

int dp(int m,int p,int q,int input[][m],int output[][p],int visited[][q],int n,int i,int j);

int main(){
	int tests,i,j,n,m;
	scanf("%d",&tests);
	while(tests--){
		scanf("%d %d",&n,&m); // n is row and m is column
		int input[n][m];
		memset(input, 0, sizeof(input[0][0]) * n * m);
		for(i=0;i<n;++i){ // row
			for(j=0;j<m;++j){ // col
				scanf("%d",&input[i][j]);
			}
		}
		int output[n][m];
		memset(output, -1, sizeof(output[0][0]) * n * m);
		int visited[n][m];
		memset(visited, 0, sizeof(visited[0][0]) * n * m);
		dp(m,m,m,input,output,visited,n,0,0);
		for(i=0;i<n;++i){
			for(j=0;j<m;++j){
				printf("%d ",output[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

int dp(int m,int p,int q,int input[][m],int output[][p],int visited[][q],int n,int i,int j){ // i and n are rows, j and m are columns
	if(visited[i][j] == 1) return INT_MAX; // if already visited
	visited[i][j] = 1; // immediately mark it as visited
	if(output[i][j] != -1) return output[i][j]; // return the precomputed value
	if(i >= n || i < 0) return INT_MAX; // if index goes out of bound for the rows
	if(j >= m || j < 0) return INT_MAX; // if index goes out of bound for the columns
	if(input[i][j] == 1){
		output[i][j] = 0;
		return 0;
	}
	output[i][j] = 1 + min(dp(m,p,q,input,output,visited,n,i-1,j),dp(m,p,q,input,output,visited,n,i+1,j),dp(m,p,q,input,output,visited,n,i,j-1),dp(m,p,q,input,output,visited,n,i,j+1));
}

int min(int a,int b,int c,int d){
	if(a<b && a<c && a<d) return a;
	if(b<a && b<c && b<d) return b;
	if(c<a && c<b && c<d) return c;
	if(d<a && d<b && d<c) return d;
}
