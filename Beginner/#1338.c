// 인덱스 i+j의 합이 입력 n-1일때부터 배열에 삽입 ~ n+n 까지

#include <stdio.h>

int main()
{
    int n;
    char mat[101][101];
    char ch = 'A';
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=i, k=n-1; j<n; j++, k--){
            if(ch == 91) ch = 'A';
            if(j+k >= n-1){
                mat[j][k] = ch++;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j >= n-1) {
                printf("%c ", mat[i][j]);
            }
            else printf("  ");
        }
        printf("\n");
    }   
    return 0;
}
