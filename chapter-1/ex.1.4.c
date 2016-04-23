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
        printf("%10.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}
