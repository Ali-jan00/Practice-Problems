#include <stdio.h>
int main()
{
	int input;
	
	printf("Press any button");
	scanf("%c", &input);
	if (input > 47 && input < 58 )
       printf("Your input is Number\n");
	else if (input > 64 && input < 91  )
       printf("Your input is Capital alphabet\n");
    else if (input > 96 && input < 123  )
	    printf("Your input is Small Character");
	else
	    printf("Your input is Special Character");
	return 0;
	}
	
	