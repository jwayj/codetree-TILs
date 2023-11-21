#include <iostream>
using namespace std;
int dx[] = {1,0,-1,0};
int dy[] = {0,-1,0,1};
int main() {
    int n;
    int position_x = 0;
    int position_y = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        char direction;
        int num;
        cin>>direction>>num;
        switch(direction){
            case 'E':
                position_x += num*dx[0];
                position_y += num*dy[0];
                break;
            case 'S':
                position_x += num*dx[1];
                position_y += num*dy[1];
                break;
            case 'W':
                position_x += num*dx[2];
                position_y += num*dy[2];
                break;
            case 'N':
                position_x += num*dx[3];
                position_y += num*dy[3];
                break;
        }

    }
    cout<<position_x<<" "<<position_y;
    return 0;
}