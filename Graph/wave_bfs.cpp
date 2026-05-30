#include<bits/stdc++.h>
using namespace std;

vector<int> graph[1005];
bool visited[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);

    visited[src]=true;

    while(!q.empty()){
        int parent=q.front();
        q.pop();

        cout<<parent<<endl;

        for(int child:graph[parent]){
            if(!visited[child]){
                q.push(child);
                visited[child]=true;
            }
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

    int src;
    cin>>src;

    memset(visited,false,sizeof(visited));

    bfs(src);

    return 0;
}
