#include <stdio.h>

int main()
{
    int arr[101][101];
    int n, m, cnt=1;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            for(int j=0; j<m; j++){
                arr[i][j] = cnt;
                cnt++;
            }
        }
        else{
            for(int j=m-1; j>=0; j--){
                arr[i][j] = cnt;
                cnt++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
