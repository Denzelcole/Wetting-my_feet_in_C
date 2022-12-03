#include <stdio.h>
/**
 * Description -: Assigning variables to replace names and numbers of text
 * %s - The name Okon is replace with %s or string in C
 * %d - %d is holding 3 for our text
 * return 0; - success
 **/

int main(void)
{
        char name[] = "Okon";
        int yrs = 3;
        printf("%s wanted to learn a tech skill but couldn't,\n", name);
        printf("%s was working for about %d yrs and not happy.\n", name, yrs);
        yrs = 4; // We can change our integer anywhere because we already stored it earlier
        printf("He really loved the ability to work from anywhere and earn a living\n");
        printf("Then after learning to code he did quit his %d yrs job.\n", yrs);

        return (0);
}