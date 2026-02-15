//Program to check the given character is an alphabet or not 
#include<stdio.h>
int main()
{
char  a;
printf("Enter the character: \n");
scanf("%c",&a);
int res=(a>='A'&&a<='Z'||a>='a'&&a<='z');
printf("The %c is an alphabet is %d \n",a,res);
    return 0;
}