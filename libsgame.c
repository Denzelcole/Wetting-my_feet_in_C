#include <stdio.h>
#include <stdlib.h>

int main()
{
        char taste[30];
        char kindtaste[30];
        char bitterness1[30];
        char bitterness2[30];

        printf("Type a taste: ");
        scanf("%s", taste);
        printf("Type a lovely food: ");
        scanf("%s", kindtaste);
        printf("Type the best meal: ");
        scanf("%s%s", bitterness1, bitterness2);

        printf("%s is sweet\n", taste);
        printf("%s is sweeter\n", kindtaste);
        printf("%s %s is sweetest\n", bitterness1, bitterness2);

        return (0);
}