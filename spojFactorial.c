// 02/12/14 15:39

// Program to solve the problem Factorial on SPOJ

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int i=1;
	unsigned long long int n,t,count=0;
	scanf("%llu",&t);
	while(t--){
		scanf("%llu",&n);
		while(pow(5,i)<=n){
			count = count + n/pow(5,i);
			i++;
		}
		printf("%llu\n",count);
		count = 0;i=1;
	}
	return 0;
}
