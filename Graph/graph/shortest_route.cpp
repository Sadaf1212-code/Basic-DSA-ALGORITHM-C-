#include<bits/stdc++.h>
using namespace std;

const int LIMIT=100;

vector<pair<int,int>> graph[LIMIT];
int distArr[LIMIT];

class cmp{
public:
    bool operator()(pair<int,int> a,pair<int,int> b){
        return a.second>b.second;
    }
};

void dijkstra(int src){
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;

    pq.push({src,0});
    distArr[src]=0;

    while(!pq.empty()){
        pair<int,int> parent=pq.top();
        pq.pop();

        int node=parent.first;
        int cost=parent.second;

        for(pair<int,int> child:graph[node]){
            int childNode=child.first;
            int childCost=child.second;

            if(cost+childCost<distArr[childNode]){
                distArr[childNode]=cost+childCost;
                pq.push({childNode,distArr[childNode]});
            }
        }
    }
}

int main(){
    int nodes,edges;
    cin>>nodes>>edges;

    while(edges--){
        int u,v,w;
        cin>>u>>v>>w;

        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    for(int i=0;i<nodes;i++){
        distArr[i]=INT_MAX;
    }

    dijkstra(0);

    for(int i=0;i<nodes;i++){
        cout<<i<<" -> "<<distArr[i]<<endl;
    }

    return 0;
}
