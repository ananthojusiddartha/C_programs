//increment and decrement operators
#include<stdio.h>
int main()
{
int a=67;
int b=++a;
int c=((++b)-(a--));
int d=((a++)+(--b)+(c++));
printf("%d",a+b+c+d);
    return 0;
}