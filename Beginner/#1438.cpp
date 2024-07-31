#include <iostream>
using namespace std;

int main()
{
    int arr[101][101] = {0};
    int n, x, y, sum = 0;
    cin >> n;
    for(int k = 0; k < n; k++) {
        cin >> x >> y;
        for(int i = x; i < x + 10; i++) {
            for(int j = y; j < y + 10; j++) {
                if(i >= 0 && i < 101 && j >= 0 && j < 101) {
                    if(arr[i][j] == 0) arr[i][j] = 1;
                }
            }
        }
    }

    for(int i = 0; i < 101; i++) {
        for(int j = 0; j < 101; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum;
    return 0;
}
