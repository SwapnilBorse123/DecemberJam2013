#include <bits/stdc++.h>

using namespace std;

const int M = 1000000007, N = 100006;
char s[N];
int dp[N], last[128];

int main(void){
    int i,j,tests;
	scanf("%d", &tests);
    dp[0] = 1;
    while(tests--){
        for(j = 0; j < 128; ++j)
			last[j] = 0;
        scanf("%s", s + 1);
        for(i = 1; s[i]; ++i){
            dp[i] = dp[i - 1] << 1;
            if(last[s[i]])
				dp[i] -= dp[last[s[i]] - 1];
            if(dp[i] < 0) 
				dp[i] += M;
            else if(dp[i] >= M) 
				dp[i] -= M;
            last[s[i]] = i;
        }
        printf("%d\n", dp[--i]);
    }
    return 0;
}
