#include <iostream>
using namespace std;

int main() {
    int n, cnt=1;
    cin >> n;
    while(1) {
        if(n*cnt > 100) break;
        cout << n*cnt << ' ';
        if(n*cnt % 10 ==0) break;
        cnt++;
    }
}
