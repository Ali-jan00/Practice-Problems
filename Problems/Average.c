#include  <stdio.h>
int main()
{
int N;//number of integers
int t;//number which be averaged
int sum;//to stack the sum
printf("Enter the how many number you want to take average of: ");
scanf("%d", &N);
for(int i=1; i<=N; i++)
{
	printf("\nEnter the number: ");
	scanf( "%d", &t);
	sum +=t;
}
int avg = sum/N ;
printf("the average is %d", avg);
return 0;
}