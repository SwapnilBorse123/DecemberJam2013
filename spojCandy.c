// 20/12/14 17:56

// Program to solve the problem Candy on SPOJ

#include<stdio.h>
#define MAX 10002
int main(){
	long int i,moves=0,sum=0,n=1,each=0;
	int candies[MAX];
	while(1){
		scanf("%ld",&n);
		if(n==-1)break;
		for(i=0;i<n;++i){
			scanf("%d",&candies[i]);
			sum += candies[i];
		}
		if(sum%n!=0){
			printf("%d\n",-1);
		}
		else{
			each = sum/n;
			for(i=0;i<n;++i){
				if(each>candies[i])
					moves = moves + (each-candies[i]);
			}
			printf("%ld\n",moves);
		}
		sum=moves=0;
	}
	return 0;
}
