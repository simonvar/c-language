/*
Exercice 1.6

Verify that the expression getchar() != EOF is 0 or 1.

NOTE: EOF is ctrl+D
*/

#include <stdio.h>

int main(){
    int c;

    do{
        c = getchar();
        if(c == '\n'){ // don't check enters
            continue;
        }

        if(c != EOF){
            putchar('f');
        } else {
            putchar('t');
        }

        putchar('\n');
    }while (c != '1'); // 1 to exit

    return 0;
}
