#include <stdio.h>

//makes global variable x
int x = 5;

void myFunction(){
    //makes local variable x
    int x = 22;
    printf("x is %d\n", x);
}
int main(){
    myFunction();
    printf("x is %d\n", x);
}