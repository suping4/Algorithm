#include <stdio.h>
#define UP 1
#define DOWN 0

int N;
int arr[101][101];

int dx[] = { -1, 1 };   //왼쪽 아래 방향, 오른쪽 위 방향
int dy[] = { 1, -1 };

int main(void)
{
    int i = 1;  
    int x = 1, y = -1;
    int d = 0;
    scanf("%d", &N);
    for (; i <= N * N; i++) {
        x += dx[d];
        y += dy[d];

        if (d == 0) {
            if (x < 0 || y >= N) {  //왼쪽 아래로 가다 바운더리 벗어나면
                if (y >= N) {       //하단 바운더리를 벗어나면
                    y--;
                    x += 2;
                }
                else
                {
                    x++;
                }
                
                d = 1;
            }
        }
        else {
            if(y<0 || x>=N)         //오른쪽 아래로 가다 바운더리 벗어나면
            {
                if (x>=N)           //오른쪽 바운더리를 벗어나면
                {
                    y += 2;
                    x--;
                }
                else 
                {
                    y++;
                }
                d = 0;
            }
        }
        arr[y][x] = i;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
