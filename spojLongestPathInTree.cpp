// 19/12/14 19:09

// Program to solve the problem Longest Path In The Tree on SPOJ

#include<bits/stdc++.h>

using namespace std;

#define MAX 10002
int dist[MAX],times[MAX],ind=1;

class Graph{
	private:
		int V;
		list<int> *adj;
	public:
		Graph(int v);
		void addEdge(int a,int b);
		void BFS(int s);
};

Graph::Graph(int v){
	this->V = v;
	adj = new list<int>[V];
}

void Graph::addEdge(int a,int b){
	adj[a].push_back(b);
	adj[b].push_back(a);
}

void Graph::BFS(int s){
	dist[s] = 0;
	bool* visited = new bool[V];
	for(int i=0;i<V;++i){
		visited[i] = false;
	}
	list<int> queue;
	visited[s] = true;
	queue.push_back(s);
	list<int>::iterator i;
	while(!queue.empty()){
		s = queue.front();
		queue.pop_front();
		for(i=adj[s].begin();i!=adj[s].end();++i){
			if(!visited[*i]){
				visited[*i] = true;
				queue.push_back(*i);
				dist[*i] = dist[s]+1;
			}
		}
	}
}

int main(){
	int j=0,n,a,b,longest=0,temp;
	scanf("%d",&n);
	temp=n;
	if(n==1){
		printf("%d\n",0);
		exit(0);
	}
	Graph g(n);
	while(n-- > 1){
		scanf("%d %d",&a,&b);
		g.addEdge(a-1,b-1);
	}
	g.BFS(0);
	int max =0,d_ind=0;
	for(int i=0;i<temp;++i){
		if(dist[i]>max){
			max = dist[i];
			d_ind = i;
		}
	}
	g.BFS(d_ind);
	max = 0;
	for(int i=0;i<temp;++i){
		if(dist[i]>max){
			max = dist[i];
			d_ind = i;
		}
	}
	printf("%d\n",max);
	return 0;
}
