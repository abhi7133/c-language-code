#include <stdio.h>
#include <conio.h>
#include <math.h>
int sum(int a, int b)// with argument with out return value example (1)
{
   return a + b;
}
void printstar(int n)//with argument without return value example(2)
{
   int i;
   for (i = 0; i < n; i++)
   {
      printf("%c", '*');
   }
}

int takenumber()//witout argument and with the return value(3)
{
   int i ;
   printf("enter a number");
   scanf("%d",&i);
   return i ;

}
int main()
{
   // c functions code
   // type of function is 1) library function which is include in header file
   // 2)user defined function is created by the user to reduce by the user

   int a, b, c;
   a = 9;
   b = 87;
   c = sum(a, b);
   // printf("the sum is %d\n",c);
  // printstar(7);
  c= takenumber();
  printf ("the number enered is %d\n",c);// return value
   return 0;
}
