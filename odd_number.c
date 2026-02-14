//Program to check the given number is odd number
#include<stdio.h>
int main()
{
int  a;
printf("Enter the Number \n");
scanf("%d",&a);
int res;
res=(a%2==1);
printf("The %d is odd number is %d \n",a,res);
    return 0;
}