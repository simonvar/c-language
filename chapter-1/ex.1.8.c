/*
Exercice 1.8

Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main(){
    long space, tab, end;
    char c;
    space = 0;
    tab = 0;
    end = 0;

    while((c = getchar()) != EOF){
        if(c == '\n')
            ++end;
        if(c == '\t')
            ++tab;
        if(c == ' ')
            ++space;
    }

    printf("space = %ld\ntab = %ld\nend = %ld\n", space, tab, end);
    getchar();

    return 0;
}
