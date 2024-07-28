#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int max_a = 1, min_b = 10000;
    for(int i=0; i<10; i++) {
        cin >> arr[i];
        if(arr[i]<100){
            if(max_a < arr[i]) max_a = arr[i];
        }
        else if(100 <= arr[i] && arr[i] < 10000){
            if(min_b > arr[i]) min_b = arr[i];
        }
    }
    if(max_a == 1) {
        cout << 100 << ' ';
    }
    else cout << max_a << ' ';
    if(min_b == 10000) cout << 100 << ' ';
    else cout << min_b;
    return 0;
}

