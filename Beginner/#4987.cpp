#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    while(1){
        int idx = str1.find(str2);
        if(idx == string::npos) {
            cout << str1;
            break;
        }
        else {
            str1.erase(idx, str2.length());
        }
    }
    return 0;
}
