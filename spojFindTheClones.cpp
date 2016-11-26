// 29/12/14 23:47

// Program to solve the problem Find the Clones on SPOJ

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	while(1){
		int arr[20001]={0};
		scanf("%d %d",&n,&m);
		if(n==0 && m==0) break;
		string s;
		std::map<string,int> mymap;
		std::map<string,int>::iterator it;
		for(int i=0;i<n;++i){
			cin>>s;
			if(mymap.count(s)){
				it = mymap.find(s);
				it->second = it->second+1;
			}
			else
				mymap.insert(std::pair<string,int>(s,0));
		}
		for(it = mymap.begin();it!=mymap.end();++it){
			arr[it->second]++;
		}
		for(int i=0;i<n;++i){
			printf("%d\n",arr[i]);
		}
	}
	return 0;
}
