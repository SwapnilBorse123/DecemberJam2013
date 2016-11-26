// 20/12/14 17:26

// Program to solve the problem Feynman on SPOJ

#include<stdio.h>
#include<math.h>

int main(){
	long long int i,sum=0,n;
	while(1){
		scanf("%lld",&n);
		if(n == 0) break;
		for(i=1;i<=n;++i){
			sum += pow(i,2);
		}
		printf("%lld\n",sum);
		sum = 0;
	}
	return 0;
}
