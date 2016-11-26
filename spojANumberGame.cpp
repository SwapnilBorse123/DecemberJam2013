// 18/12/14 17:34

// Program to solve the problem A Number Game on SPOJ

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	unsigned long long int num;
	int i;
	scanf("%llu",&num);
	if(num%10==0){
		printf("%d\n",2); // Nikhifor looses
	}
	else{
		printf("%d\n%d\n",1,num%10);
	}
	return 0;
}
