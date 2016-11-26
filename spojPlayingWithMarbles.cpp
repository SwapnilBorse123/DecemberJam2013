// 07/01/15 01:15

// SPOJ Playing with marbles

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)==1&&n){
		printf("%d\n",((n+1)*(3*(n+1)-1))/2);
	}
	return 0;
}
