#include<stdio.h>
int main(){
int a[12],n,i,j,sum=0,min,max,second,found=0,peaks=0;
int current=1,longest=1,k,shift,temp,r,d,count=0;
float average;
do{
printf("enter number of readings(5-12):");
scanf("%d",&n);
if(n<5||n>12)
printf("invalid n!enter again:\n");
}while(n<5||n>12);
for(i=0;i<n;i++){
do{
printf("enter reading %d (0-1000):",i+1);
scanf("%d",&a[i]);
if(a[i]<0||a[i]>1000)
printf("invalid reading!enter again.\n");
}while(a[i]<0||a[i]>1000);
}
printf("original readings:\n");
for(i=0;i<n;i++)
printf("%d",a[i]);
sum=0;
min=max=a[0];
for(i=0;i<n;i++){
sum+=a[i];
if(a[i]<min)
min=a[i];
if(a[i]>max)
max=a[i];}
average=(float)sum/n;
printf("sum=%d\n",sum);
printf("average=%f\n",average);
printf("minimum=%d\n",min);
printf("maximum=%d\n",max);
found=0;
for(i=0;i<n;i++)
{
if(a[i]<max){
if(!found||a[i]>second){
second=a[i];
found=1;}
}
}
if(found)
printf("second-largest distinct value=%d\n",second);
else
printf("no second largest distinct value exists\n");
for(i=1;i<n-1;i++)
{
if(a[i]>a[i-1]&&a[i]>a[i+1])
peaks++;}
printf("number of local peaks=%d\n",peaks);
for(i=1;i<n;i++){
if(a[i]>a[i-1])
current++;
else
current=1;
if(current>longest)
longest=current;}
printf("longest increasing contiguous run=%d\n",longest);
printf("enter k for rotation\n");
scanf("%d",&k);
shift=k%n;
if(shift<0)
shift+=n;
for(i=0;i<shift;i++){
temp=a[n-1];
for(j=n-1;j>0;j--)
a[j]=a[j-1];                                
a[0]=temp;}
printf("rotated reading:");
for(i=0;i<n;i++)
printf("%d",a[i]);
printf("enter last two digits of registration number:\n");
scanf("%d",&r);
r=r%100;
d=(r%9)+1;
for(i=0;i<n;i++){
if(a[i]%d==0)
count++;}
printf("d=%d\n",d);
printf("values divisble by d=%d\n",count);
return 0;
}
