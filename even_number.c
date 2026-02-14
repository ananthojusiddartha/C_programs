//Program to check the given number is even number
#include<stdio.h>
int main()
{
int  a;
printf("Enter the Number \n");
scanf("%d",&a);
int res;
res=(a%2==0);
printf("The %d is even number is %d \n",a,res);
    return 0;
}