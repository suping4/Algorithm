#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int sum_e=0, sum_o=0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
    }
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(arr[i] < arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int i=0; i<10; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}

