#include <stdio.h>

int main()
{
    char arr[101][101];
    int n;
    char c = 'A';
    scanf("%d", &n);
    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>=0; j--){
            if(c == 91) c = 'A';
            arr[j][i] = c;
            c++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
