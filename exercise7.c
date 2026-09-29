#include <stdio.h>
#include <stdlib.h>

int main()

{
    int counter = 1,number,largest=0,second_largest=0;


    while (counter <= 5)
    {
        printf("Enter number %d: ", counter);
        scanf("%d", &number);

        if (number > largest)
        {
            second_largest = largest;
            largest = number;
        }
        else if (number > second_largest)
        {
            second_largest = number;
        }

        counter++;
    }

    printf("The largest number is %d\n", largest);
    printf("The second largest number is %d\n", second_largest);




return 0;
}
