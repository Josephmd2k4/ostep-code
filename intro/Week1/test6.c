#include <stdio.h>

int main(){
    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);


    char myText[] = "Hello";
    printf("%s\n", myText);

    float f1 = 35e3;
    double d1 = 12E4;

    printf("%.2f\n", f1);
    printf("%.2f\n", d1);

    float myFloatNum = 3.5;
    printf("%f\n", myFloatNum);
    printf("%d\n", (int) myFloatNum);
    printf("%.0f\n", myFloatNum);
    printf("%.1f\n", myFloatNum);
    printf("%.2f\n", myFloatNum);
    printf("%.3f\n", myFloatNum);
    printf("%.4f\n", myFloatNum);


    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("Size of int: %lu bytes\n", sizeof(myInt));
    printf("Size of float: %lu bytes\n", sizeof(myFloat));
    printf("Size of double: %lu bytes\n", sizeof(myDouble));
    printf("Size of char: %lu byte\n", sizeof(myChar));


    int maxScore = 500;
    int userScore;

    printf("Enter your score: \n");
    scanf("%d", &userScore);

    float percentageScore = (float) userScore / maxScore * 100;

    printf("Your percentage score is: %.2f\n", percentageScore);

}