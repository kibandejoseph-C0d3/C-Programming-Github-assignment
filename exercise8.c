#include <stdio.h>
#include <stdlib.h>

int main()
{

    float hours, rate, grossPay;
    int employees, i;

    printf("Enter number of employees: ");
    scanf("%d", &employees);

    for (i=1; i<=employees; i++)
    {
        printf("\nEmployee %d\n", i);

        printf("Enter hours worked: ");
        scanf("%f", &hours);

        printf("Enter hourly rate: ");
        scanf("%f", &rate);

        if (hours<= 40)
        {
            grossPay = hours * rate;
        }
        else
        {
            grossPay =(40*rate)+((hours-40)*rate*1.5);
        }
        printf("Salary: %.2f\n", grossPay);
    }



    return 0;
}
