#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int sum =10;
    int len = str.length();
    for(int i=0; i<len-1; i++){
        if(str[i] == '('){
            if(str[i+1] == '(') sum+= 5;
            else if(str[i+1] == ')') sum+= 10;
        }
        if(str[i] == ')'){
            if(str[i+1] == ')') sum+= 5;
            else if(str[i+1] == '(') sum+= 10;
        }
    }
    cout << sum;
    return 0;
}
