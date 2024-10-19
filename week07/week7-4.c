#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_integer()
{
   int n;
   printf("Enter the vaule:");
   scanf("%i",&n);
   
   return n;
}
int factorial(int a)
{
   int i;
   int result=1;
   
   for(i=1; i<=a; i++)
     result*=i;
     
   return result;
}
int combination(int num1, int num2)
{
   return (factorial(num1)/(factorial(num1-num2)*factorial(num2)));
}
int main(void)
{
   int x, y;
   int com;
   
   x= get_integer();
   y= get_integer();
   com= combination(x, y);
   printf("The result of C(%i,%i) is %i",x,y,com);
   
   return 0;
}
