#include <stdio.h>

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /*нижний предел*/
    upper = 300; /*верхний предел*/
    step = 20; /*шаг*/
    printf("  Translate F deg. in C deg.\n");
    printf("\t F     C\n");

    fahr = lower;
    while(fahr <= upper){
        printf("%10.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
}
