// 19/12/14 13:21

// Program to solve the problem Boring Factorials on SPOJ

#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll modular_pow(ll base, ll exponent, int modulus);

int main(){
	ll tests,n,p,res=-1,t,i;
	scanf("%lld",&tests);
	while(tests--){
		res = -1;
		scanf("%lld %lld",&n,&p);
		if(n>=p){
			printf("0\n");
		}
		else{
			for(i=n+1;i<p;++i){
				t = modular_pow(i,p-2,p);
				res = (res*t)%p;
			}
			printf("%lld\n",p+res);
		}
	}
	return 0;
}

ll modular_pow(ll base, ll exponent, int modulus)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}
