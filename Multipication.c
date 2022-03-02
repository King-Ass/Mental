#include<stdio.h>

int main()
{ 
int b=1;
int a;


printf("Enter the number");
scanf("%d",&a);
do{
printf( "%d X %d =%d\n",a,b,a*b);
b++;
}while(b<=10);
    return 0;
}