#include <iostream>
using namespace std;

int main()
{
    int dx[] = {1,-1,0};
    int dy[] = {1,0,-1};  //오아,왼,위
    char arr[101][101] = {'\0'};
    int cnt=0, x=0, y=0, dir=0;
    int n;
    cin >> n;
    while(1){
        arr[y][x] = (char)cnt + '0';
        int nx = x+dx[dir];
        int ny = y+dy[dir];
        if(nx>=n || ny>=n || nx<0 || ny<0 || arr[ny][nx] != '\0'){
            dir = (dir+1)%3;
            nx = x+dx[dir];
            ny = y+dy[dir];
            if(arr[ny][nx] != '\0') break;
        }
        x = nx;
        y = ny;
        cnt = (cnt + 1) % 10;
        
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] != '\0') cout << arr[i][j] << ' ';
            else cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
