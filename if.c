#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3)
{
        int check;
        if (num1 >= num2 && num1 >= num3)
        {
                check = num1;
        }
        else if (num2 >= num1 && num2 >= num3) // this is used as a else if continuation
        {
                check = num2;
        }
        else // this executes when all above are not equal or greater than eachother
        {
                check = num3;
        }

        // if (num1 > num2,) // checking if num1 is greater than num2
        /*  {
                  check = num2; // returning num2
          }
          else // else print num1
          {
                  check = num1;
          }
          */
        return check;
}

int main()
{
        // printf("%d\n", max(40, 30, 60));
        if (4 > 5 || 6 > 9)
        {
                printf("True\n");
        }
        else
        {
                printf("false\n");
        }

        return (0);
}