// 17/12/14 12:33

// Program to solve the problem Perfect Cubes on SPOJ

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 101
#define int long int

int bs(int*m,int,int,int);

int main(){
	int arr[MAX];
	int i,a,b,c,d,diff=0;
	for(i=0;i<MAX;++i){
		arr[i] = i*i*i;
	}
	for(a=2;a<MAX;++a){
		for(b=2;b<a;++b){
			for(c=b+1;c<a;++c){
				diff = arr[a] - (arr[b]+arr[c]);
				d = bs(arr,0,MAX-1,diff);
				if(d && b<c && c<d){
					printf("Cube = %ld, Triple = (%ld,%ld,%ld)\n",a,b,c,d);
				}		
			}
		}
	}
	return 0;
}

int bs(int*arr,int l,int h,int num){
	if(h>=l){
		int mid = (l+h)/2;
		if(arr[mid] == num) return mid;
		if(arr[mid] > num) return bs(arr,l,mid-1,num);
		return bs(arr,mid+1,h,num);
	}
	return 0;
}
