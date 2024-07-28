#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int koi=0, ioi=0;
    int len = str.size();
    for(int i=0; i<len-2; i++){
        if(str[i] == 'K'){
            if(str[i+1] == 'O'){
                if(str[i+2] == 'I') koi++;
            }
        }
        else if(str[i] == 'I'){
            if(str[i+1] == 'O'){
                if(str[i+2] == 'I') ioi++;
            }
        }
    }
    cout << koi << '\n' << ioi;
    return 0;
}

