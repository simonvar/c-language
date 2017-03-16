/*
Exercice 1.9

Write a program to copy its input to its output, replacing each string of one or more blanks by a
single blank.
*/

#include <stdio.h>

int main(){
    char c;
    int blank = 0;

    while((c = getchar()) != EOF){
        if(c == ' '){
            if(!blank){
                blank = 1;
                putchar(c);
            }
        } else {
            blank = 0;
            putchar(c);
        }
    }

    getchar();
    return 0;
}
