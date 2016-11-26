// 28/12/14 10:16

// Program to solve the problem Assistance Required on SPOJ

#include<bits/stdc++.h>

using namespace std;

#define MAX 33815

int main(){
	int i,j,n,temp,cross,count=0,count1=0;
	std::bitset<MAX> primes;
	primes.set();
	for(j=2;2*j<MAX;++j){
		primes[2*j] = 0;
	}
	for(i=3;i<MAX;++i){
		if(primes[i]){
			cross = count = i;
			while(cross<MAX){
				cross++;
				if(primes[cross])
					count--;
				if(count == 0){
					primes[cross] = 0;
					count=i;
				}
			}
		}
	}
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		for(i=2;i<MAX;++i){
			if(primes[i]) count1++;
			if(count1 == n)break;
		}
		printf("%d\n",i);
		count1=0;
	}
	return 0;
}
