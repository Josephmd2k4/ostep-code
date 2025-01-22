#include <stdio.h>

//initialize function
float convertFtoC(float fahrenheit);


//main function
int main(){
    float fahrenheit;
    printf("Enter a temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    //call function
    float celsius = convertFtoC(fahrenheit);
    printf("%.2f degrees Fahrenheit is %.2f degrees Celsius.\n", fahrenheit, celsius);
}

//function to convert Fahrenheit to Celsius
float convertFtoC(float fahrenheit){
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}