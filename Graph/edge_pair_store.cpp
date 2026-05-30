#include<bits/stdc++.h>
using namespace std;

int main(){
    int nodes,edges;
    cin>>nodes>>edges;

    vector<pair<int,int>> edgeList;

    while(edges--){
        int u,v;
        cin>>u>>v;

        edgeList.push_back({u,v});
    }

    for(auto edge:edgeList){
        cout<<edge.first<<" "<<edge.second<<endl;
    }

    return 0;
}
