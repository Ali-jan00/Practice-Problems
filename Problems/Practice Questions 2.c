#include <stdio.h>
int main(void)
{
	int min, hr;
	printf("Input hours:");
	scanf("%d", &hr);
	printf("Input minutes:");
	scanf("%d", &min);
    min = hr*60+min;
	printf("Total:%d minutes.", min);
	return 0;
}