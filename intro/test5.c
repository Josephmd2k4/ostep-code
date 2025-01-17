#include <stdio.h>

int main(){

    int width, height, area;

    printf("Width of rectangle: \n");
    scanf("%d", &width);
    printf("Height of rectangle: \n");
    scanf("%d", &height);
    area = width * height;
    printf("Area of rectangle: %d\n", area);
}