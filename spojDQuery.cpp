// 31/12/14 12:21

// Program to solve the problem DQuery on SPOJ

#include<bits/stdc++.h>

using namespace std;

#define iMAX 30005
#define MAX 1000002

int main(){
	int i,j,n,m,q,count,arr[iMAX];
	scanf("%d",&n);
	for(m=0;m<n;++m){
		scanf("%d",&arr[m]);
	}
	scanf("%d",&q);
	while(q--){
		std::bitset<MAX> set;
		count=0;
		scanf("%d %d",&i,&j);
		i-=1;j-=1;
		for(;i<=j;++i){
			if(!set[arr[i]]){
				count++;
				set[arr[i]]=1;	
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
