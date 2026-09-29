#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("N\tN^2\tN^3\tN^4\n");

    for (int n = 1; n <= 11; n++)
    {
        printf("%d\t%d\t%d\t%d\n",
               n,
               n * n,
               n * n * n,
               n * n * n * n);
    }
    return 0;
}
