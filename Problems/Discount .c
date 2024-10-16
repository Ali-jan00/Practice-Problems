#include <stdio.h>
int main ()
{
  float price;
  float savedAmount; 
  float discountedPrice;
  printf("Enter the shopping amount");
  scanf("%f", &price);
  if (price>2000 && price<4000)
  {
  discountedPrice = price*0.2;
  printf("The actual price: %f \nthe discounted price: %f", price, discountedPrice);
  } 
  else if (price > 4001 && price <= 6000)
  {
  discountedPrice = price*0.3;
  printf("The actual price: %f \nthe discounted price: %f", price, discountedPrice);
  }
  else if (price > 6000)
  {
  discountedPrice = price*0.6;
  printf("The actual price: %f \nthe discounted price: %f", price, discountedPrice);
  }
  savedAmount = price - discountedPrice;
  printf("\nSaved Amount: %f", discountedPrice);
  return 0;
}