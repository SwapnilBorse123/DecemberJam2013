// 29/12/14 15:37

// Program to solve the problem Candy3 on SPOJ

#include<bits/stdc++.h>

using namespace std;

int main(){
    int tests,N;
    long long  ans,temp;
    cin>>tests;
    while(tests--){
        cin>>N;
        ans = 0;
        for(int i=0;i<N;i++){
            scanf("%lld",&temp);
            ans = ans + temp;
            if(ans >= N)
                 ans %= N;
        }
        if(ans == 0) 
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
