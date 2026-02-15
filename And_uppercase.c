//Program to check the given character is uppercasecase or not 
#include<stdio.h>
int main()
{
char  a;
printf("Enter the character: \n");
scanf("%c",&a);
int res=(a>='A'&&a<='Z');
printf("The %c is uppercase alphabet of is %d \n",a,res);
    return 0;
}