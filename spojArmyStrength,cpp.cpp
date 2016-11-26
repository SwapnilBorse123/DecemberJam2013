// 29/12/14 23:05

// Program to solve the problem Army Strength on SPOJ

#include<bits/stdc++.h>

using namespace std;

int compare (const void * a, const void * b){
	return ( *(int*)a - *(int*)b );
}

int main(){
	int ng,nm,tests,i=0,j=0;
	scanf("%d",&tests);
	while(tests--){
		scanf("%d %d",&ng,&nm);
		int NG[ng],NM[nm];
		for(i=0;i<ng;++i){
			scanf("%d",&NG[i]);
		}
		for(i=0;i<nm;++i){
			scanf("%d",&NM[i]);
		}
		i=j=0;
		while(i!=ng && j!=nm){
			if(NG[i]>=NM[j]) j++;
			if(NG[i]<NM[j]) i++;
		}
		if(i == ng) printf("MechaGodzilla\n");
		else if(j == nm) printf("Godzilla\n");
	}
	return 0;
}
