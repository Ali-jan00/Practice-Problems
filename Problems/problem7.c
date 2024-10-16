#include <stdio.h>
int main ()
{
	char vowels,decision;
	int vowcount=0;
	int constcount=0;

	do {
		printf("Enter any character : ");
     	scanf(" %c", &vowels);
		if(vowels == 'a' || vowels == 'e'|| vowels == 'i'|| vowels == 'o'|| vowels == 'u')
		{
			vowcount++;
		}
		else 
		{
			constcount++;
		}
		
		printf("Want to add another character \ntype [Y] for Yes and [N] for NO\n");
		scanf("  %c", &decision);
	    }
	    while(decision=='Y');
    	printf("the vowels are %d \nthe consunants are %d", vowcount, constcount);
	
	return 0;
}