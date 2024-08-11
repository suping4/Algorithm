#include <iostream>
using namespace std;

int main() {
    int arr[101][101] = {0};
    int n, a, b, cnt=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        for(int y=b; y<b+10; y++){
            for(int x=a; x<a+10; x++) {
                if(arr[y][x] == 0) arr[y][x] = 1;
            }
        }
    }
    for (int i=1; i<101; i++) {
        for (int j=1; j<101; j++) {
            if(arr[i][j] != arr[i][j-1]) cnt+=1;
            if(arr[j][i] != arr[j-1][i]) cnt+=1;
        }
    }
    cout << cnt;
}
