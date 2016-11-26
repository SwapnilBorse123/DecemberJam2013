// 12/12/14 15:57

// Program to solve the problem Bitmap on SPOJ

#include <stdio.h>
#include<queue>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include<iostream>
#include<cstring>
#define inf 1000000000
using namespace std;
bool vis[200][200];
int ans[200][200];
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1};
int main()
{
    int t;
    char c;
    scanf("%d",&t);
    while(t--)
    {
        queue<pair<int,int> >S;
        int a,b;
 
        scanf("%d %d",&a,&b);
        for(int i=0; i<a; i++)
            for(int j=0; j<b; j++)
                vis[i][j]=0;
 
        for(int i=0; i<a; i++)
            for(int j=0; j<b; j++)
                ans[i][j]=inf;
 
        for(int i=0; i<a; i++)
            for(int j=0; j<b; j++)
            {
                cin>>c;
                if(c=='1')
                    S.push(make_pair(i,j)),ans[i][j]=0;
 
            }
        while(!S.empty())
        {
            pair<int,int>node=S.front();
            vis[node.first][node.second]=1;
            S.pop();
            for(int i=0; i<4; i++)
            {
                int X=node.first+dx[i];
                int Y=node.second+dy[i];
                if(ans[X][Y]!=0)
                    if(X>=0&&X<a&&Y>=0&&Y<b)
                    {
                        if(!vis[X][Y] )
                        {
                            vis[X][Y]=1;
                            ans[X][Y]=ans[node.first][node.second]+1;
                            S.push(make_pair(X,Y));
 
                        }
                    }
 
            }
 
        }
 
 
        for (int i=0; i<a; i++)
        {
            for (int j=0; j<b-1; j++)
                printf("%d ",ans[i][j]);
           
            printf("%d\n",ans[i][b-1]);
        }
    }
    return 0;
}
