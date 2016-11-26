// 08/01/15 15:58

// SPOJ Sometimes A Penalty Is Good

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int g,t,a,d,i,teamk,matches,extra,temp;
	while(1){
		matches=0,extra=0,temp=0;
		scanf("%lld %lld %lld %lld",&g,&t,&a,&d);
		if(g==-1&&t==-1&&a==-1&&d==-1)break;
		long long int comb=(t*(t-1))/2;
		matches=comb*g;
		teamk = a*g+d;
		if(!(teamk&(teamk-1))){ // if power of two
		}
		else{ // if not a power of two make it a power of two
			temp=teamk;
			for(i=sizeof(long long int)*8-1;i>=0;--i){
				if(teamk&(1LL<<i)){
					break;
				}
			}
			teamk=0;
			teamk = teamk|(1LL<<(i+1));
			extra = teamk-temp;
		}
		i=0;
		for(i=sizeof(long long int)*8-1;i>=0;--i){
			if(teamk&(1LL<<i)){
				teamk = teamk ^ (1LL<<i);
				break;
			}
		}
		for(i=i-1;i>=0;i--){
			teamk |= 1LL<<i;
		}
		matches += teamk;
		printf("%lld*%lld/%lld+%lld=%lld+%lld\n",g,a,t,d,matches,extra);
	}
	return 0;
}
