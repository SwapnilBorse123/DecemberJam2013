// 19/12/14 13:07

// Program to solve the problem Hubullulu on SPOJ

#include<stdio.h>
#include<stdlib.h>

int main(){
	unsigned long long int num;
	int tests,player;
	scanf("%d",&tests);
	while(tests--){
		scanf("%llu",&num);
		scanf("%d",&player);
		if(player == 0){
			printf("Airborne wins.\n");
		}
		else{
			printf("Pagfloyd wins.\n");
		}
	}
	return 0;
}
