#include <stdio.h>
int main ()
{
	int number;
	int multiple = 1;
	int answer;
	int i = 11;
	printf("Enter the number: ");
	scanf("%d", &number);
		while (multiple < i)
		{	
		 answer = multiple*number;
		 printf("%d x %d = %d\n", number, multiple, answer);
		 multiple = multiple + 1;
		}
	return 0;
}