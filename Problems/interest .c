#include  <stdio.h>
int main()
{
float P;
float R;
float T;
float inter;
printf("Enter Principal: ");
scanf("%f", &P);
printf("Enter time: ");
scanf("%f", &T);
printf("Enter Rate of interest: ");
scanf("%f", &R);

inter = (P*R*T)/100;

printf("interest is %f",inter);
return 0;
}