#include <stdio.h>
/**
 * Types of datas - i. Int, ii. float iii. double iv. char
 * We're only going to few ones here
 */

int main()
{
        int fut = 60;                             // used for whole numbers
        double score = 5.6;                       // we use this for decimal numbers also we can use floats
        char grade = 'A';                         // we can store just one character
        char subjects[] = "Mathematics Computer"; // we can use char to store characters by using array

        printf("Mr paul is %d he got %0.2f \n", fut, score);
        printf("This made him a grade %c student in these studies, %s.\n", grade, subjects);
        return (0);
}