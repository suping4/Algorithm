#include <stdio.h>
#include <memory.h>

// n/2 열부터 1 3 5 7씩 삽입

int main()
{
    int n;
    char ch = 'A';
    char mat[101][101];
    memset(mat, ' ', sizeof(char)*101*101);
    scanf("%d", &n);
    if(n%2==0 || n<1 || n>100){
        printf("INPUT ERROR");
        return 0;
    }
    for(int i=(n/2); i>=0; i--){
        for(int j=i; j<n-i; j++){
            if(ch > 'Z') ch = 'A';
            mat[j][i] = ch++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
