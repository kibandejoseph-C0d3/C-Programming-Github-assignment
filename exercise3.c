#include <stdio.h>
#include <stdlib.h>

int main()
{
    float highst_rain,curr_rain;
    printf("Enter highest rainfal record in ml: ");
    scanf("%f",& highst_rain);
    printf("Enter the current record of rainfall in ml: ");
    scanf("%f", & curr_rain);

               if (curr_rain>highst_rain)
    {
        printf("The current rainfall exceeds the highest rainfall ever recorded.\n");

        highst_rain = curr_rain;
    }

    printf("The highest rainfall is now %.2f mm.\n", highst_rain);





return 0;
}
