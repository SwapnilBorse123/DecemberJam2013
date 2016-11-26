// 02/01/15 01:56

// Program to solve the problem A Christmas Play on SPOJ

#include<bits/stdc++.h>
using namespace std;
#define MAX 20002

int compare(const void*a,const void*b){
	return(*(int*)a-*(int*)b);
}

int main(){
	int tests,i,j,n,k,arr[MAX],min;
	scanf("%d",&tests);
	while(tests--){
		scanf("%d %d",&n,&k);
		for(i=0;i<n;++i){
			scanf("%d",&arr[i]);
		}
		if(k==1){
			printf("%d\n",0);continue;
		}
		qsort(arr,n,sizeof(int),compare);
		min = INT_MAX;
		for(i=0;i<n-k+1;++i){
			j=i+k-1;
			int diff = arr[j]-arr[i];
			if(min>diff){
				min = diff;
			}
		}
		printf("%d\n",min);
	}
	return 0;
}
