// 29/12/14 13:57

// Program to solve the problem He is Offside on SPOJ

#include<bits/stdc++.h>

using namespace std;

#define MAX 15

int compare (const void * a, const void * b){
	return ( *(int*)a - *(int*)b );
}

int main(){
	int i,a,d,A[MAX],D[MAX],off=0;
	while(1){
		scanf("%d %d",&a,&d);
		if(a==0 && d==0)break;
		for(i=0;i<a;++i){
			scanf("%d",&A[i]);
		}
		for(i=0;i<d;++i){
			scanf("%d",&D[i]);
		}
		qsort(A,a,sizeof(int),compare);
		qsort(D,d,sizeof(int),compare);
		for(i=0;i<a;++i){
			if(A[i]<D[0]||A[i]<D[1])break;
		}
		if(i==a)
			printf("N\n");
		else
			printf("Y\n");
		/*for(i=0;i<a;++i){
			printf("%d ",A[i]);
		}
		printf("\n");
		for(i=0;i<a;++i){
			printf("%d ",D[i]);
		}*/
	}
	return 0;
}
