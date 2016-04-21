#include <stdio.h>

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; //нижн€€ граница
    upper = 300; //верхн€€ граница
    step = 20; //величина шага
    printf("  Translate F deg. in C deg.\n");
    printf("\t F     C\n");

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.9/9.0) * (fahr - 32.0);
        printf("%10.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
}
