// 22/12/14 14:12

// Program to solve the problem Counting Triangles on SPOJ

#include<bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long int n,ans,t;
	scanf("%llu",&n);
	while(n--){
		scanf("%llu",&t);
		printf("%llu\n",(t*(t+2)*(2*t+1))/8);
	}
	return 0;
}
