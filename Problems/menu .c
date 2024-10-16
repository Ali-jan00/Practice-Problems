#include <stdio.h>
int main ()
{
   char snack;
   int totalAmount;
   int typesOfSnacks;
   int nburger =0;
   int nfries=0;
   int npizza=0;
   int nsandwich=0;
   int aburger=0, afries=0, apizza=0, asandwich=0;//total amount of snacks 
   int pburger, pfries, ppizza, psandwich;//price of item
   pburger = 200;
   pfries = 50;
   ppizza = 500;
   psandwich = 120;
   
   printf("Please select from the following Menu \n B=Burger \n F=Fresh Fries \n P=Pizza \n S=Sandwich \n");
   printf("How many types of snacks you need to order: ");
   scanf("%d", &typesOfSnacks);
  
   if (typesOfSnacks == 1)
{
   printf("Enter the first snack you want to order: ");
   scanf(" %c", &snack);
   	if(snack == 'B')
			{
		printf("Enter how many");
		scanf(" %d", &nburger);
   		aburger = pburger*nburger;
   	        }
    else if (snack == 'F')
    		{
		printf("Enter how many");
	    scanf(" %d", &nfries);
   	    afries = pfries*nfries;
   	        }
    
	else if (snack == 'P') 
			{
            printf("Enter how many: ");
            scanf("%d", &npizza);
            apizza = ppizza * npizza;
            }
             
	else if (snack == 'S') 
			{
            printf("Enter how many: ");
            scanf("%d", &nsandwich);
            asandwich = psandwich * nsandwich;
            }
}  
   if (typesOfSnacks == 2)
{
   	printf("Enter the first snack you Want to order: ");
   	scanf(" %c", &snack);
   	if(snack == 'B')
			{
		printf("Enter how many");
		scanf(" %d", &nburger);
		aburger = aburger + aburger;
   		aburger =aburger +(pburger*nburger);
   	        }
    else if (snack == 'F')
    		{
		printf("Enter how many");
	    scanf(" %d", &nfries);
   	    afries = pfries*nfries;
   	        }
    
	else if (snack == 'P') 
			{
            printf("Enter how many: ");
            scanf("%d", &npizza);
            apizza = ppizza * npizza;
            }
             
	else if (snack == 'S') 
			{
            printf("Enter how many: ");
            scanf("%d", &nsandwich);
            asandwich = psandwich * nsandwich;
            }
            
    snack = 0;
	        
    printf("Enter the Second snack you Want to order: ");
   	scanf(" %c", &snack);
   	if(snack == 'B')
			{
		printf("Enter how many");
		scanf(" %d", &nburger);
   		aburger = aburger +(pburger*nburger);
   	        }
    else if (snack == 'F')
    		{
		printf("Enter how many");
	    scanf(" %d", &nfries);
   	    afries = pfries*nfries;
   	        }
    
	else if (snack == 'P') 
			{
            printf("Enter how many: ");
            scanf("%d", &npizza);
            apizza = ppizza * npizza;
            }
             
	else if (snack == 'S') 
			{
            printf("Enter how many: ");
            scanf("%d", &nsandwich);
            asandwich = psandwich * nsandwich;
            }
	}
   if (typesOfSnacks == 3)
{
	printf("Enter the first snack you want: ");
	scanf( " %c", &snack);
	if(snack == 'B')
			{
		printf("Enter how many: ");
		scanf(" %d", &nburger);
   		aburger = pburger*nburger;
   	        }
    else if (snack == 'F')
    		{
		printf("Enter how many: ");
	    scanf(" %d", &nfries);
   	    afries = pfries*nfries;
   	        }
    
	else if (snack == 'P') 
			{
            printf("Enter how many: ");
            scanf("%d", &npizza);
            apizza = ppizza * npizza;
            }
             
	else if (snack == 'S') 
			{
            printf("Enter how many: ");
            scanf("%d", &nsandwich);
            asandwich = psandwich * nsandwich;
            }
            
    snack = 0;
	        
    printf("Enter the Second snack you Want to order: ");
   	scanf(" %c", &snack);
   	if(snack == 'B')
			{
		printf("Enter how many: " );
		scanf(" %d", &nburger);
   		aburger = pburger*nburger;
   	        }
    else if (snack == 'F')
    		{
		printf("Enter how many: ");
	    scanf(" %d", &nfries);
   	    afries = pfries*nfries;
   	        }
    
	else if (snack == 'P') 
			{
            printf("Enter how many: ");
            scanf("%d", &npizza);
            apizza = ppizza * npizza;
            }
             
	else if (snack == 'S') 
			{
            printf("Enter how many: ");
            scanf("%d", &nsandwich);
            asandwich = psandwich * nsandwich;
            }
    
	snack = 0;
	        
    printf("Enter the third snack you Want to order: ");
   	scanf(" %c", &snack);
   	if(snack == 'B')
			{
		printf("Enter how many: ");
		scanf(" %d", &nburger);
   		aburger = pburger*nburger;
   	        }
    else if (snack == 'F')
    		{
		printf("Enter how many: ");
	    scanf(" %d", &nfries);
   	    afries = pfries*nfries;
   	        }
    
	else if (snack == 'P') 
			{
            printf("Enter how many: ");
            scanf("%d", &npizza);
            apizza = ppizza * npizza;
            }
             
	else if (snack == 'S') 
			{
            printf("Enter how many: ");
            scanf("%d", &nsandwich);
            asandwich = psandwich * nsandwich;
            }        	
	}
   if (typesOfSnacks == 4)
{
	printf("Enter the first Snack you want");
	scanf( " %c", &snack);
	if(snack == 'B')
			{
		printf("Enter how many");
		scanf(" %d", &nburger);
   		aburger = pburger*nburger;
   	        }
    else if (snack == 'F')
    		{
		printf("Enter how many");
	    scanf(" %d", &nfries);
   	    afries = pfries*nfries;
   	        }
    
	else if (snack == 'P') 
			{
            printf("Enter how many: ");
            scanf("%d", &npizza);
            apizza = ppizza * npizza;
            }
             
	else if (snack == 'S') 
			{
            printf("Enter how many: ");
            scanf("%d", &nsandwich);
            asandwich = psandwich * nsandwich;
            }
            
    snack = 0;
	        
    printf("Enter the Second snack you Want to order: ");
   	scanf(" %c", &snack);
   	if(snack == 'B')
			{
		printf("Enter how many");
		scanf(" %d", &nburger);
   		aburger = pburger*nburger;
   	        }
    else if (snack == 'F')
    		{
		printf("Enter how many");
	    scanf(" %d", &nfries);
   	    afries = pfries*nfries;
   	        }
    
	else if (snack == 'P') 
			{
            printf("Enter how many: ");
            scanf("%d", &npizza);
            apizza = ppizza * npizza;
            }
             
	else if (snack == 'S') 
			{
            printf("Enter how many: ");
            scanf("%d", &nsandwich);
            asandwich = psandwich * nsandwich;
            }
    
	snack = 0;
	        
    printf("Enter the third snack you Want to order: ");
   	scanf(" %c", &snack);
   	if(snack == 'B')
			{
		printf("Enter how many");
		scanf(" %d", &nburger);
   		aburger = pburger*nburger;
   	        }
    else if (snack == 'F')
    		{
		printf("Enter how many");
	    scanf(" %d", &nfries);
   	    afries = pfries*nfries;
   	        }
    
	else if (snack == 'P') 
			{
            printf("Enter how many: ");
            scanf("%d", &npizza);
            apizza = ppizza * npizza;
            }
             
	else if (snack == 'S') 
			{
            printf("Enter how many: ");
            scanf("%d", &nsandwich);
            asandwich = psandwich * nsandwich;
            } 
			
	snack = 0;
	        
    printf("Enter the fourth snack you Want to order: ");
   	scanf(" %c", &snack);
   	if(snack == 'B')
			{
		printf("Enter how many");
		scanf(" %d", &nburger);
   		aburger = pburger*nburger;
   	        }
    else if (snack == 'F')
    		{
		printf("Enter how many");
	    scanf(" %d", &nfries);
   	    afries = pfries*nfries;
   	        }
    
	else if (snack == 'P') 
			{
            printf("Enter how many: ");
            scanf("%d", &npizza);
            apizza = ppizza * npizza;
            }
             
	else if (snack == 'S') 
			{
            printf("Enter how many: ");
            scanf("%d", &nsandwich);
            asandwich = psandwich * nsandwich;
            }    		   
}
   totalAmount = (aburger+afries+apizza+asandwich);
   printf("Your total amount is %d", totalAmount);
   
return 0 ; 
}