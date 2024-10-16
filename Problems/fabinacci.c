#include <stdio.h>
int main ()
{
	int n1 = 1;
	int n2 = 1;
	int n3= n1 + n2;
	int i;
	int sum = 0;
	printf("1 1 2 ");
		for(n3=n1+n2 ; n3<1000; n3=n1+n2)
		{	
		
		printf("%d ", n3);
		if( 0 == n3 % 3|| 0==n3%5 ||0==n3%7)
		{
			sum += n3;
		}
		n1=n2;
		n2=n3;
		n3=n1+n2; 
		}
		printf("\nthe sum is  %d", sum);
		return 0;
}
