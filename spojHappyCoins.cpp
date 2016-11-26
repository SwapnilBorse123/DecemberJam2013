// 07/01/15 01:31

// SPOJ Happy Coins

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,l,h;
	char name[4];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		l=0;h=0;
		while(n--){
			scanf("%s",&name);
			if(name[0]=='l')l++;
			else h++;
		}
		if(!(l&1)&&!(h&1)){ // both even
			printf("hhb\n");
		}
		else if((l&1)&&(h&1)){ // both odd
			printf("lxh\n");
		}
		else if((l&1)&&!(h&1)){ // l is odd and h is even
			printf("lxh\n");
		}
		else if(!(l&1)&&(h&1)){  // l is even and h is odd
			printf("hhb\n");
		}
	}
	return 0;
}
