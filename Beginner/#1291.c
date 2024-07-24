#include <stdio.h>

int main(){
    while(1){
        int s,e;
        scanf("%d %d", &s, &e);
        if((s<2 || s>9) || (e<2 || e>9)){
            printf("INPUT ERROR!\n");
            continue;
        }
        else{
            if(s>e){
                for(int i=1; i<10; i++){
                    int sub = s - e+1;
                    int tmp = s;
                    while(1){
                        if(sub == 1){
                            printf("%d * %d = %2d\n", tmp, i, tmp*i);
                            break;
                        }
                        printf("%d * %d = %2d   ", tmp, i, tmp*i);
                        sub--;
                        tmp--;
                    }
                }
            break;
            }
            else if(s==e){
                for(int i=1; i<10; i++){
                    printf("%d * %d = %2d\n", s, i, s*i);
                }
                break;
            }
            else{
                for(int i=1; i<10; i++){
                    int sub = e - s+1;
                    int tmp = s;
                    while(1){
                        if(sub == 1){
                            printf("%d * %d = %2d\n", tmp, i, tmp*i);
                            break;
                        }
                        printf("%d * %d = %2d   ", tmp, i, tmp*i);
                        sub--;
                        tmp++;
                    }
                }
            break;
            }
        }
    }
}
