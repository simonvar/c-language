/*
Exercice 1.5

Modify the temperature conversion program to print the table in reverse order, that is, from 300
degrees to 0. 
*/

#include <stdio.h>

int main(){
    int fahr;

    printf("  Translate F deg. in C deg.\n");
    printf("\t F     C\n");

    for(fahr = 300; fahr >= 0; fahr -= 20){
        printf("%10d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
    }
}
