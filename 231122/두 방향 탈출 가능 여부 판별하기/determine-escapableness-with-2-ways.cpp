#include <iostream>
#include <vector>
using namespace std;

int dx[] = {1, 0};
int dy[] = {0, 1};
int result = 0;
vector<vector<int>> v;
bool visited[101][101] = {false};
void DFS(int position_x, int position_y);
int main() {
    int n, m;
    cin>>n>>m;
    v.resize(n+1);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int tmp;
            cin>>tmp;
            v[i].push_back(tmp);
        }
    }
    DFS(1,1);
    cout<<result;
    return 0;
}
void DFS(int position_x, int position_y){
    visited[position_x-1][position_y-1] = true;
    for(int i = 0; i<2; i++){
        int next_x = position_x + dx[i]-1;
        int next_y = position_y + dy[i]-1;
        if(next_x == 4 && next_y == 4){
            result = 1;
            return;
        }
        if(!visited[next_x][next_y]&&v[next_x][next_y]){
            DFS(next_x,next_y);
        }

    }
}