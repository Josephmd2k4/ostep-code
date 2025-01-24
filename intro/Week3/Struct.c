#include <stdio.h>

struct Car{
    char brand[50];
    char model[50];
    int year;
    char color[50];
};


int main(){
    struct Car car1 = {"BMW", "X5", 1999, "Black"};
    struct Car car2 = {"Ford", "Mustang", 1969, "Red"};
    struct Car car3 = {"Toyota", "Corolla", 2011, "White"};

    printf("%s %s %d %s\n", car1.brand, car1.model, car1.year, car1.color);
    printf("%s %s %d %s\n", car2.brand, car2.model, car2.year, car2.color);
    printf("%s %s %d %s\n", car3.brand, car3.model, car3.year, car3.color);

    return 0;
}