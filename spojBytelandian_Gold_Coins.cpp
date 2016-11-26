// 11/12/14 16:10

// Program to solve the problem Bytelandian Gold Coins on SPOJ

#include<iostream>
#include<map>
#include<stdio.h>

using namespace std;

long long max(long long a,long long b);
long long dp(int n);

// A global map variable myMap
std::map<int,long long> myMap;

int main(){
	long long num;
	myMap.clear();
	while(scanf("%lld",&num)!=EOF){
		printf("%lld\n",dp(num));
	}
	return 0;
}

long long dp(int n){
	if(n == 0){
		return 0;
	}
	long long rem = myMap[n];
	if(rem == 0){
		rem = max(n,dp(n/2)+dp(n/3)+dp(n/4));
		myMap[n] = rem;
	}
	return rem;
}

long long max(long long a,long long b){
	return (a > b ? a : b);
}
