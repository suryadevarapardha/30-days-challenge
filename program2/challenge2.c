#include<stdio.h>
int main(){
float distance,mileage,fuelprice,fuelrequired,totalcost;
printf("enter the distance:");
scanf("%f", &distance);
printf("enter the mileage:");
scanf("%f", &mileage);
printf("enter the fuelprice:");
scanf("%f", &fuelprice);
fuelrequired=distance/mileage;
totalcost=fuelrequired*fuelprice;
printf("fuel required:%f\n",fuelrequired);
printf("total fuel cost:%f\n",totalcost);
return 0;
}
