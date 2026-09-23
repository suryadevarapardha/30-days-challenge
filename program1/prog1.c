include<stdio.h>
int main(){
float a,b,c,d,e,total,average,percentage;
printf("enter the 5 subject marks:");
scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
total=a+b+c+d+e;
average=(a+b+c+d+e)/5;
percentage=(total/500)*100;
printf("total:%f,average:%f,percentage:%f\n",total,average,percentage);
return 0;
}


