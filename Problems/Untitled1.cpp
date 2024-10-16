#include <stdio.h>

int main(void)
{
	float r, height, Volume, v;
	printf("Enter radius:");
	scanf("%f",&r);
	printf("Enter height:");
	scanf("%f",&height);
	Volume = 3.14*r*r*height;
	printf("the Volume of cylinder = %f", Volume);
	return 0;
}