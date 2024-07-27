#include <iostream>
using namespace std;

int main()
{
    int dx[] = {1,0,-1,0};
    int dy[] = {0,1,0,-1};  //동남서북
    int arr[101][101] = {0,};
    int cnt=1, x=0, y=0, dir=0;
    int n;
    cin >> n;
    while(1){
        if(cnt >n*n) break;
        arr[y][x] = cnt;
        int nx = x+dx[dir];
        int ny = y+dy[dir];
        if(nx>=n || ny>=n || nx<0 || ny<0 || arr[ny][nx] > 0){
            dir = (dir+1)%4;
        }
        x = x + dx[dir];
        y = y + dy[dir];
        cnt++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
