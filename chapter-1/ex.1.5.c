#include <stdio.h>

int main(){
    int fahr;

    printf("  Translate F deg. in C deg.\n");
    printf("\t F     C\n");

    for(fahr = 300; fahr >= 0; fahr -= 20){
        printf("%10d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
    }
}
