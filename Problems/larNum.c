#include <stdio.h>
int main()
{
    int a;
    int b;
    int d;
    printf("Enter the first Number");
    scanf(" %d", &a);
     printf("Enter the second Number");
    scanf(" %d",&b);
     printf("Enter the third Number");
    scanf(" %d", &d);
    if(a>b && a>d)
    {
        printf("%d is the largest number", a);
    }
    else if (b>a && b>d)
    {
        printf("%d is the largest number", b);
    }
    else
    {
        printf("%d is the largest number", d);
    }
    return 0;
}