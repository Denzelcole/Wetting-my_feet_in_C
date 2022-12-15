#include <stdio.h>
#include <stdlib.h>

/***
 * THis is a tricky one use W3schoools.com
 * it helps as well
 * We are just calling a funtion and printing
 * differently.
 *
 **/

void lookingUp(char person[], int age) // we printed both a string and a num
{
        printf("How you %s, your age na %d \n", person, age);
}

int main()
{
        lookingUp("Obi", 50);
        lookingUp("Olufosen", 60);
        lookingUp("Janded", 30);
        return (0);
}