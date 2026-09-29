#include <stdio.h>
#include <stdlib.h>

int main()
{

        int no_values,sum = 0, number;
        float average;

    printf("Enter the number of values: ");
    scanf("%d",&no_values);

    for (int i=1;i<=no_values;i++)
    {
        printf("Enter value %d: ", i);
        scanf("%d", &number);

        sum = sum + number;
    }

    average = (float)sum / no_values;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
