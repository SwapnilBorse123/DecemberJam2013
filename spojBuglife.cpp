// 27/01/15 13:43

// SPOJ Buglife

#include<bits/stdc++.h>
using namespace std;
struct gnode{
	int vertex;
	char color;
};

gnode arr[2001];
int susflag=0;

class Graph{
	int V;
	list<gnode> *adj;
	public:
		Graph(int V);
		void addEdge(gnode v,gnode w);
		void BFS();
};

Graph::Graph(int t){
	V = t+1;
	adj = new list<gnode>[t+1];
}

void Graph::addEdge(gnode v,gnode w){
	adj[v.vertex].push_back(w);
}

void Graph::BFS(){
	int flag=1;
	bool *visit = new bool[V+1];
	for(int i=1;i<V+1;++i){
		visit[i]=false;
	}
	list<gnode>queue;
	for(int i=1;i<V+1;++i){
		if(visit[i]==false){
			arr[i].color='r';
			queue.push_back(arr[i]);
			list<gnode>::iterator it;
			while(!queue.empty()&&flag){
				gnode s = queue.front();
				queue.pop_front();
				for(it = adj[arr[i].vertex].begin();it!=adj[arr[i].vertex].end();++it){
					if(!visit[it->vertex]){
						visit[it->vertex]=true;
						if(s.color == it->color){
							susflag=1;flag=0;
							break;
						}
						else if(s.color=='r'){
							it->color = 'b';
						}
						else if(s.color=='b'){
							it->color = 'r';
						}
						queue.push_back(*it);
					}
				}
			}
		}
	}
}

int main(){
	int tests,bugs,noi,a,b,count=1;
	scanf("%d",&tests);
	while(tests--){
		gnode arr[2001];
		scanf("%d %d",&bugs,&noi);
		Graph g(bugs);
		susflag=0;
		while(noi--){
			scanf("%d %d",&a,&b);
			gnode p,q;
			p.vertex=a;p.color='n';
			q.vertex=b;q.color='n';
			g.addEdge(p,q);
			arr[a] = p; arr[b]=q;
		}
		g.BFS();
		if(susflag){
			printf("Scenario #%d:\n",count);
			printf("Suspicious bugs found!\n");
			count++;
		}
		else{
			printf("Scenario #%d:\n",count);
			printf("No suspicious bugs found!\n");
			count++;
		}
	}
	return 0;
}
