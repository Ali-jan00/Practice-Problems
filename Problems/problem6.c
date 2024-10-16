#include <stdio.h>
int main ()
{
    int i=1;
    int num;
    int rev=0;
    int lastnum;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(num<0; num>1; num/=10)
    {
        lastnum = num%10;
        rev= rev*10+lastnum;
    }
    printf("%d",rev);
    return 0;
}