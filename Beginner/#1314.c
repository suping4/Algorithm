#include <stdio.h>

int main()
{
    char arr[101][101];
    int n;
    char c = 'A';
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(c == 91) c = 'A';
            if(i % 2 == 1){
                arr[n-j-1][i] = c;
                c++;
            }
            else{
                arr[j][i] = c;
                c++;
            }
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
