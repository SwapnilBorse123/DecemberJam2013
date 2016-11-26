// 24/12/14 16:43

// Program to solve the problem Frequent Values on SPOJ

#include<bits/stdc++.h>

using namespace std;

#define MAX 100002
#define iMAX 100001

int main(){
	int arr[MAX],n=1,q,i,j,m,max=0;
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		scanf("%d",&q);
		for(m=0;m<n;++m){
			scanf("%d",&arr[m]);
		}
		while(q--){
			scanf("%d %d",&i,&j);
			i = i-1;j=j-1;
			int count[2*MAX]={0};
			for(m=i;m<=j;++m){
				if(arr[m]>=0){
					count[arr[m]+iMAX]++;
				}
				else{
					count[abs(arr[m])]++;
				}
			}
			if(arr[i]<0){
				max = count[abs(arr[i])];
			}
			else{
				max = count[arr[i]+iMAX];
			}
			for(m=i;m<=j;++m){
				if(arr[m]<0){
					if(count[abs(arr[m])]>max){
						max = count[abs(arr[m])];
					}
				}
				else{
					if(count[arr[m]+iMAX]>max){
						max = count[arr[m]+iMAX];
					}
				}
			}
			printf("%d\n",max);
			max = 0;
		}
	}
	return 0;
}
