//Program to check the given character is digit or not 
#include<stdio.h>
int main()
{
char  a;
printf("Enter the character: \n");
scanf("%c",&a);
int res=(a>='0'&&a<='9');
printf("The %c is a digit is %d \n",a,res);
    return 0;
}