// 02/01/15 01:24

// Program to solve the problem Prime Path on SPOJ

#include<bits/stdc++.h>
using namespace std;
#define MAX 10000

//List of methods
int oneChange(int,int);

int main(){
	std::bitset<MAX> primes;
	int t,i,j,ind=0,numa,numb,mxlvl=0,arr[MAX],found=0;
	for(i=2;i<MAX;++i){
		if(!primes[i])
			for(j=2;i*j<MAX;++j){
				primes[i*j]=1;
			}
	}
	for(i=1000;i<MAX;++i){
		if(!primes[i])
			arr[ind++] = i;
	}
	for(scanf("%d",&t);t>0;t--){
		std::bitset<MAX> visited;
		std::queue<int> q;
		int level[MAX];
		scanf("%d %d",&numa,&numb);
		if(numa==numb){
			printf("%d\n",0);
			continue;
		}
		level[numa]=0;
		mxlvl=0;
		q.push(numa);
		visited[numa]=1;
		found=0;
		int go=1;
		while(!q.empty()&&go){ // BFS starts here
			for(i=0;i<ind;++i){
				if(!visited[arr[i]]){
					if(oneChange(q.front(),arr[i])){
						q.push(arr[i]);
						level[arr[i]] = level[q.front()]+1;
						if(arr[i]==numb){
							found=1,go=0;
							printf("%d\n",level[numb]);
							break;
						}
						visited[arr[i]]=1;	
					}
				}
			}
			mxlvl=level[q.front()]+1;
			q.pop();
		}
		if(!found)printf("Impossible\n");
	}
	return 0;
}

int oneChange(int numa,int numb){ // function to check if the number has more than one different digits
	int change=0;
	while(numa>0&&numb>0){
		int rema=numa%10;int remb=numb%10;
		numa=numa/10;numb=numb/10;
		if(rema!=remb)change++;
		if(change>1)return 0;
	}
	return 1;
}
