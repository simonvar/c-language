#include <stdio.h>

int main(){

    int c;
    c = getchar();

    while(c != 'e') /* 'e' to exit */
    {
        if(c == EOF)
            putchar('t'); /* true if c = EOF */
        else
            putchar('f'); /* false if c != EOF */

        c = getchar();
    }


    return 0;
}
