#include <stdio.h>

int main ()
{

   unsigned short N, i, j, z;

    while (scanf("%hu", &N) != EOF)
    {

        for (i = 0; i < N; i += 2)
        {
            for (j = 0; j < (N - i) / 2; j++)
                printf(" ");

               for (z = 0; z <= i; z++)
                 printf("*");


            printf("\n");

        }

        for (i = 0; i < N/2; i++)
            printf(" ");
        printf("*\n");

        for (i = 1; i < N/2; i++)
            printf(" ");

        printf("***\n\n");

    }

    return 0;
}
