#include<bits/stdc++.h>
using namespace std;

const int LIMIT=1e5+5;

vector<int> graph[LIMIT];
bool visited[LIMIT];

void dfs(int src){
    cout<<src<<endl;

    visited[src]=true;

    for(int child:graph[src]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

int main(){
    int nodes,edges;
    cin>>nodes>>edges;

    while(edges--){
        int u,v;
        cin>>u>>v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    memset(visited,false,sizeof(visited));

    dfs(0);

    return 0;
}
