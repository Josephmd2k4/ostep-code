#include <stdio.h>

int main(){
    int i, j;
    for(i = 1; i <= 12; i++){
        for(j = 1; j <= 12; j++){
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    return 0;
}