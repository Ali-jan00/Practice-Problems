#include <stdio.h>
int main ()
{
    int num;
    int sum;
    int i;
    printf("Enter the number: ");
    scanf(" %d", &num);
    for(i=1000000000; i>0; i/=10)
    {
     sum += (num/i);
     num = num%i;
    }
    printf("the sum of numbers is %d", sum);
    return 0;
}