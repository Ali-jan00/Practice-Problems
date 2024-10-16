#include <stdio.h>
int main ()
{
	int num;
	int i = 0;
	int fact = 1;
	printf("Enter the number: ");
	scanf("%d", &num);
	for(i=1; i<=num; i++)
	{
	fact=fact*i;
	printf("%d * ", fact);
	}
    printf("\n %d", fact);
}