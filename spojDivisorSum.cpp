// 30/12/14 11:24

// Program to solve the problem divisor summation on SPOJ

#include<bits/stdc++.h>

using namespace std;

#define MAX 500001

int main(){
	int tests,n;
	int arr[MAX]={0};
	for(int i=2;i<MAX;++i){
		for(int j=2;j*i<MAX;++j){
			arr[i*j]+=i;
		}
	}
	scanf("%d",&tests);
	while(tests--){
		scanf("%d",&n);
		if(n==1)printf("%d\n",0);
		else printf("%d\n",arr[n]+1);
	}
	return 0;
}
