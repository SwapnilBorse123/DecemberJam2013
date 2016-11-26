// 23/12/14 13:06

// Program to solve the problem Assisstance Required on SPOJ

#include<bits/stdc++.h>

using namespace std;

#define MAX 3002
int main(){
	int primes[MAX]={0},i,j,k,prod;
	i = 2;prod=1;j=1;
	primes[2]=0;
	while(i<MAX){
		j=2;
		while(prod<MAX){
			prod = i*j++;
			primes[prod] = 1;
		}
		i++;
		while(primes[i]==1){
			i++;
		}
	}
	for(i=0;i<100;++i){
		if(primes[i] == 0){
			printf("%d ",primes[i]);
		}
	}
	return 0;
}
