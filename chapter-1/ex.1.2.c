/*
Exercice 1.2

Experiment to find out what happens when prints's argument string contains \c, where c is some
character not listed above.
*/

#include <stdio.h>

int main(){
    printf("\c,\q,\y,\v,\z,\w,\e,\1,\2,\3,\4");
    printf("\n,\!,\@,\#");
}
