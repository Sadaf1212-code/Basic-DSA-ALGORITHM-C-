#include<bits/stdc++.h>
using namespace std;

int main(){
    int nodes,edges;
    cin>>nodes>>edges;

    vector<int> graph[nodes];

    while(edges--){
        int u,v;
        cin>>u>>v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int x:graph[3]){
        cout<<x<<" ";
    }

    return 0;
}
