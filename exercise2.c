#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum, product, difference,quotient,remainder;
    printf("Enter first number: ");
    scanf("%d", & num1);
    printf("Enter second number: ");
    scanf("%d", & num2);
    sum=num1+num2, product=num1*num2, difference=num1-num2, quotient=num1/num2, remainder=num1%num2;
    printf("The sum of %d and %d is %d\n",num1,num2, sum);
    printf("The product of %d and %d is %d\n", num1,num2, product);
    printf("The difference between %d and %d is %d\n", num1, num2, difference);
    printf("The quotient of %d and %d is %d\n", num1, num2, quotient);
    printf("The remainder of %d divided by %d is %d", num1,num2, remainder);

    return 0;
}
