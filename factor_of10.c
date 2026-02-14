//Program to check the given number is factor of 10 
#include<stdio.h>
int main()
{
int  a;
printf("Enter the Number \n");
scanf("%d",&a);
int res;
res=(10%a==0);
printf("The %d is factor of 10 is %d \n",a,res);
    return 0;
}