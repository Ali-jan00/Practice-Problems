#include <stdio.h>
int main()
{
	char Coffeesize;
	float Wwater=15, Wsugar=15, WMix=20, WaddCoffee=2, WaddMilk=4, WmixWell2=20;
	float Bwater=20, Bsugar=20, BMix=25, BaddCoffee=15, BaddMilk=0, BmixWell2=25;
	char coffeeType;
	printf("Welcome to the Coffee Shop \nWhich coffee would you like \nEnter W for White Coffee \nEnter B for Black Coffee \n[W/B]: ");
    scanf("%c", &coffeeType);
	switch(coffeeType)
		{
			case 'W':
			printf("Double:(D) or Manual:(M) : ");
			scanf(" %c", &Coffeesize);
				switch(Coffeesize)
				{
				case'D':
				printf("\nPut Water:%f \nSugar:%f \nMix Well:%f \nAdd Coffee \nAdd Milk:%f \nMix Well:%f", Wwater+(Wwater*0.5), Wsugar+(Wsugar*0.5),  WMix+(WMix*0.5), WaddCoffee+(WaddCoffee*0.5), WaddMilk+(WaddMilk*0.5), WmixWell2+(WmixWell2));	
				break;
				case'M':
				printf("Put Water:%f \nSugar:%f \nMix Well:%f \nAdd Coffee \nAdd Milk:%f \nMix Well:%f bitch", Wwater , Wsugar, WMix, WaddCoffee, WaddMilk, WmixWell2);	
				break;
				default:
			    printf("please enter the right character");
				break;
				}	
			break;
			
			case 'B':
			printf("Double:(D) or Manual:(M) : ");
			scanf(" %c", &Coffeesize);
				switch(Coffeesize)
				{
				case'D':
				printf("\nPut Water:%f \nSugar:%f \nMix Well:%f \nAdd Coffee:%f \nMix Well:%f", Bwater+(Bwater*0.5), Bsugar+(Bsugar*0.5),  BMix+(BMix*0.5), BaddCoffee+(BaddCoffee*0.5), BmixWell2+(BmixWell2));	
				break;
				case'M':
				printf("Put Water:%f \nSugar:%f \nMix Well:%f \nAdd Coffee \nMix Well:%f bitch", Bwater , Bsugar, BMix, BaddCoffee, BmixWell2);	
				break;
				default:
			    printf("please enter the right character");
				break;
				}	
			break;
			
			default :
				printf("Enter the right character");
		}
	return 0;	
}