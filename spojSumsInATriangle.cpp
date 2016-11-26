#include<bits/stdc++.h>
using namespace std;
int main(){int p[101][101],m[101][101],i,j,t,n,l;for(cin>>t;t>0;t--){cin>>n;for(i=0;i<n;++i){for(j=0;j<=i;++j){cin>>p[i][j];}}for(i=n-1;i>=0;--i){for(j=i;j>=0;--j){if(i==n-1)m[i][j]=p[i][j];else{m[i][j]=p[i][j]+max(m[i+1][j],m[i+1][j+1]);}}}cout<<m[0][0];}return 0;}
