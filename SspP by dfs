#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
int visited[100]={0};
int dis[100]={0};
void dfs(int src,int val){
    visited[src]=1;
    cout<<src<<" ";
    for(int node:adj[src]){                
        if(visited[node]==0){
            dis[node]=1+val;
            dfs(node,dis[node]);
        }
    }
    return ;
}
int main() {
    int m;
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(2,0);
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<dis[i]<<" ";
    }
}
