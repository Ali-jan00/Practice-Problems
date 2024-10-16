#include <stdio.h>
int main()
{
	int i;
	int num1,num2,num3,num4,num5;
	int sum;
	int anum,rnum;
	printf("Enter a five digit number: \n");
	scanf(" %d", &num1);
	scanf(" %d", &num2);
	scanf(" %d", &num3);
	scanf(" %d", &num4);
	scanf(" %d", &num5);
		sum = num1+num2+num3+num4+num5; 
	printf("the sum of the number is : %d", sum);	
	if(0 == sum % 2)
	{ 
		printf("\nthe number is even");
		//checking if number is prim or not 
		  for (int i = 2; i < sum; i++) 
		   {
            if (sum % i == 0) 
		   		{
            	printf("\nthe Number is not Prime");
            	
            	}
            else 
            	{
            	printf("the number is not prime");
				}
			break;
           }
           
    anum = num1*10000+num2*1000+num3*100+num4*10+num5;
    rnum = num5*10000+num4*1000+num3*100+num2*10+num1;
    	if(anum==rnum);
    	{
    		printf("\nnumber is a Palindrome");
		}
    
	}
return 0 ;
}
