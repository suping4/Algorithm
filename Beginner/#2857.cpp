#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    char c[5][16] = {'\0' };
    for(int i=0; i<5; i++){
        cin >> str;
        for(int j=0; j<str.length(); j++){
            c[i][j] = str[j];
        }
    }
    for(int i=0; i<16; i++){
        for(int j=0; j<5; j++){
            if(c[j][i] != '\0') cout << c[j][i];
        }
    }
}
