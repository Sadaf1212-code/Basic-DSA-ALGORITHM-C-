#include<bits/stdc++.h>
using namespace std;

int main(){
    int nodes,edges;
    cin>>nodes>>edges;

    int graph[nodes][nodes];
    memset(graph,0,sizeof(graph));

    while(edges--){
        int u,v;
        cin>>u>>v;

        graph[u][v]=1;
        graph[v][u]=1;
    }

    if(graph[3][1]) cout<<"connection ache";
    else cout<<"connection nai";

    return 0;
}
