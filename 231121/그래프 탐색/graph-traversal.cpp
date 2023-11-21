#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> edge;
vector<bool> visited;
void DFS(int node, int count);
int main() {
    int n,m;
    cin>>n>>m;
    edge.resize(n+1);
    visited.assign(n+1, false);
    for(int i = 0; i<m; i++){
        int tmp1, tmp2;
        cin>>tmp1>>tmp2;
        edge[tmp1].push_back(tmp2);
        edge[tmp2].push_back(tmp1);
    }
    visited[1] = true;
    DFS(1, 0);
    int result = 0;
    for(int i = 2; i<n+1; i++){
        if(visited[i]){
            result++;
        }
    }
    cout<<result;
    return 0;
}
void DFS(int node, int count){
    for(int i : edge[node]){
        if(!visited[i]){
            visited[i] = true;
            DFS(i, count+1);
        }
    }
}