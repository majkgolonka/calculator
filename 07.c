#include <stdio.h>
#include <stdlib.h>

int main()
{

    char dzialanie;
    double a, b;

    printf("*** Calculator *** \n");

    printf("Pick an operation [+] [-] [*] [/] \n");
    scanf("%c", &dzialanie);

    printf("Pick the first number a : ");
    scanf("%lf", &a);

    printf("Pick the second number b : ");
    scanf("%lf", &b);

    switch(dzialanie){
    case '+':
        printf("The sum of a + b = %f\n ", a+b);
    break;
    case '-':
        printf("The difference between a - b = %f\n ", a-b);
    break;
    case '/':
        if(b!=0)
        {
            printf("The quotient of a / b = %f\n", a/b);
        }
        else
        {
            printf("Divide by 0 error\n", a);
        }

    break;
    case '*':
        printf("The product of a * b = %f\n ", a*b);
    break;
    default:
        printf("Error \n");
    break;
    }

    return 0;
}

