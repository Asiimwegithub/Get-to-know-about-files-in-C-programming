
#include<stdio.h>
int main()
{

float a,b,c; 
 printf("Enter the first float value:"); 
 scanf("%f",&a); 
 printf("Enter the second float value:"); 
 scanf("%f",&b); 
 printf("Enter the third float value:"); 
 scanf("%f",&c); 
 float sum = a + b + c; 
 float average = sum / 3; 
 printf("SUM: %f\n",sum); 
 printf("AVERAGE: %f",average); 
 return 0;
 } 
