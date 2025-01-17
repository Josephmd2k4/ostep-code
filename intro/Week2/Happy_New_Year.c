#include <stdio.h>

int main() {
    int i = 10;
    while(10 >= i) {
        if (i == 0) {
            printf("Happy New Year!\n");
            break;
        } else {
            printf("%d\n", i);
            i = i - 1;
        }
    }
    return 0;
}