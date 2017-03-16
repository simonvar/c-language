/*
Exercice 1.10

Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b,
and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.
*/

#include <stdio.h>

int main(){
    char c;

    do{
        c = getchar();
        if(c == '\t' || c == '\b' || c == '\\'){
            putchar('\\');

            if(c == '\t')
                putchar('t');

            if(c == '\b')
                putchar('b');

            if(c == '\\')
                putchar('\\');
        } else {
            putchar(c);
        }
    }while(c != EOF);

    return 0;
}
