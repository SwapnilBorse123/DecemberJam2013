// 13/12/14 13:48

// Program to solve the problem Favorite Dice on SPOJ

#include<stdio.h>
#include<math.h>
#include<float.h>

#define MAX 1000

int main(){
	int tests,i;
	float sides,result = 0;
	scanf("%d",&tests);
	while(tests--){
		scanf("%f",&sides);
		for(i=1;i<=sides;++i){
			result += sides/i;
		}
		printf("%.2f\n",result);
		result = 0;
	}
	return 0;
}
