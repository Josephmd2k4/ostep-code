#include <stdio.h>

int main(){
    int myNumbers[4] = {25, 50, 75, 100};

    // myNumbers is a pointer to the first element of the array
    printf("%p\n", myNumbers);
    // Dereference the pointer to get the value of the first element
    printf("First element: %d\n", myNumbers[0]);

    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++){
        printf("Element %d: %d\n", i, myNumbers[i]);
    }
}