/*
Exercice 1.4

Write a program to print the corresponding Celsius to Fahrenheit table. 
*/

#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;
    upper = 160;
    step = 20;

    printf("  Translate C deg. in F deg.\n");
    printf("\t C     F\n");

    celsius = lower;
    while(celsius <= upper){
        fahr = (9.0/5.0 * celsius) + 32.0;  /*translate C in F*/
        printf("%10.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}
