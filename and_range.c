//Program to check the given number is in range of -4 to 6
#include<stdio.h>
int main()
{
int  a;
printf("Enter the number: \n");
scanf("%d",&a);
int res;
res=(a<6&&a>-4);
printf("The %d is in range of -4 to 6 is %d \n",a,res);
    return 0;
}