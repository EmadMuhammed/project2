#include <stdio.h>
#include <stdlib.h>
// assignment 2
// Calculator

int main()
{
    float a,b;
    int x ;
    printf("\n Please Enter Thr First Number : ");
    scanf("%f", & a);
    printf("\n Please Choose The Operator");
    printf("\n '+' ");
    printf("\n '-' ");
    printf("\n '*' ");
    printf("\n '/' ");
    scanf("\n %d", & x);

    if (x='+')
    {
        printf("\n Please Enter The Second Number ");
        scanf("%f", & b);
        a+b;
        printf("%f", a+b);
    }
    else if (x='-')
    {
       printf("\n Please Enter The Second Number ");
        scanf("%f", & b);
        a-b;
        printf("%f", a-b);
    }
    else if (x='*')
    {
       printf("\n Please Enter The Second Number ");
        scanf("%f", & b);
        a*b;
        printf("%f", a*b);
    }
    else if (x='/')
    {
       printf("\n Please Enter The Second Number ");
        scanf("%f", & b);
        a/b;
        printf("%f", a/b);
    }
    return 0;
}
