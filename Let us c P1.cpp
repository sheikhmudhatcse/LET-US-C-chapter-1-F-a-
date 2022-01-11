#include <stdio.h>
int main()
{
float basicPay, da, hra, grossPay;
printf("\nEnter Basic Salary of Ramesh: ");
scanf("%f", &basicPay);
da = 0.4 * basicPay;
hra = 0.2 * basicPay;
grossPay = basicPay + da + hra;
printf("Basic Salary of Ramesh: %f\n ", basicPay);
printf("DA of Ramesh: %f\n ", da);
printf("HRA of Ramesh: %f\n ", hra);
printf("Gross Salary of Ramesh: %f\n", grossPay);
return 0 ;
}