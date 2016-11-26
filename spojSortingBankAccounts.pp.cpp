// 20/12/14 14:09

// Program to solve the problem Sorting Bank Accounts on SPOJ

#include<bits/stdc++.h>

using namespace std;

int main(){
	int tests,n;
	string s;
	scanf("%d",&tests);
	while(tests--){
		scanf("%d",&n);
		cin.ignore();
		std::map<std::string,int> mymap;
		std::map<std::string,int>::iterator it;
		while(n-- > 0){
			getline(cin,s);
			int cnt = mymap.count(s);
			if(cnt){
				mymap.at(s) = mymap[s]+1;
			}
			else{
				mymap[s] = 1;
			}	
		}
		for(it = mymap.begin();it!=mymap.end();++it){
			cout<<it->first<<" "<<it->second<<"\n";
		}
	}
	return 0;
}
