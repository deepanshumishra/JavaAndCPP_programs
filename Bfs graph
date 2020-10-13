#include <bits/stdc++.h>
using namespace std;
#define ll long long
class graph{
    public:
        map<int,list<int> >l;
        //bool visited[];
        void addedge(int x,int y){
            l[x].push_back(y);
            l[y].push_back(x);
        }
        void bfs(int src){
            queue<int>q;
            map<int,bool>visited;
            q.push(src);
            visited[src]=true;
            
            while(!q.empty()){
                 int node=q.front();
                 cout<<node<<" ";
                 q.pop();
                 for(int nbr:l[node]){
                     if(!visited[nbr]){
                         q.push(nbr);
                         visited[nbr]=true;
                     }                     
                 }
            }
        }
};
int main() {
    graph g;
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,3);
    g.addedge(1,2);
    g.addedge(2,1);
    g.bfs(0);
}
