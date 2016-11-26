// 30/12/14 00:59

// Program to solve the problem Not A Triangle on SPOJ

#include<bits/stdc++.h>

using namespace std;

#define MAX 2002

int compare (const void * a, const void * b){
	return ( *(int*)a - *(int*)b );
}
int bSearch(int*,int,int,int);

int main(){
	int i,j,k,n,lengths[MAX];
	long int sum=0;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;++i){
			scanf("%d",&lengths[i]);
		}
		qsort(lengths,n,sizeof(int),compare);
		sum=0;
		for(i=0;i<n-2;++i){
			for(j=i+1;j<n-1;++j){
				int c = bSearch(lengths,j+1,n-1,lengths[i]+lengths[j]);
				if(c!=-1)	
				sum += n-c;
			}
		}
		if(sum == 0) printf("0\n");
		else printf("%ld\n",sum);
		sum=0;
	}
	return 0;
}
int bSearch(int*arr,int lo,int hi,int num){
	int c=-1;
	if(lo<=hi){
		int mid = (lo+hi)/2;
		if(arr[mid]>num && arr[mid-1]<=num) return mid;
		if(arr[mid]>num) return bSearch(arr,lo,mid-1,num);
		if(arr[mid]<=num) return bSearch(arr,mid+1,hi,num);	
	}
	return c;
}
