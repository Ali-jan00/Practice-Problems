#include <stdio.h>
int main()
{
	int num,power,answer=1;
	int i=0;
	printf("whats the number doc: ");
	scanf("%d", &num);
	printf("\n the power please: ");
	scanf(" %d", &power);
	for(i=0;i<power;i++)
	{
	 answer=answer*num;	
	}
	printf("the answer is %d", answer);
	return 0;
}