// 31/12/14 16:39

// Program to solve the problem Enormous Input Test on SPOJ

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k,i,temp,count=0;
	std::cin.sync_with_stdio(false);
	std::cout.sync_with_stdio(false);
	cin>>n>>k;
	for(i=0;i<n;++i){
		cin>>temp;
		if(temp%k==0){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
