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
        void sssp(int src){
            queue<int>q;
            map<int,int>dist;            
            for(auto node_pair:l){
                int node=node_pair.first;
                dist[node]=INT_MAX;
            }
            q.push(src);
            dist[src]=0;
            
            while(!q.empty()){
                 int node=q.front();
                 //cout<<node<<" ";
                 q.pop();
                 for(int nbr:l[node]){
                     if(dist[nbr]==INT_MAX){
                         q.push(nbr);
                         dist[nbr]=dist[node]+1;
                     }                     
                 }
            }
            for(auto node_pair:l){
                int node=node_pair.first;
                int d=dist[node];
                cout<<node<<"  "<<d<<endl;
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
    g.sssp(0);
}
