#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string n;
    while(1){
        cin >> n;
        if(n == "0") break;              //0을 입력받으면 종료
        string rev = n;                  //n을 역순으로 할 rev 정의
        reverse(rev.begin(), rev.end());
        int sum=0;
        int len= rev.length();
        for(int i=0; i<len; i++){
            sum += n[i] - '0';          //각 자리수의 합 구함
        }
        cout << stoi(rev) << ' ' << sum << endl;
    }
    return 0;
}
