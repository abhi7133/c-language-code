#include <stdio.h>
//int fun1(int b)
int b1=34;        // global variable which accessable to all
int fun1(int b1)
{
    static int myvar= 98 ;
    printf("the value myvar is %d\n",myvar);
    myvar++;
  //  printf("the value of b inside fun1 is %d\n",b1);
   // printf("the address of b inside fun1 is %d\n",&b);
   // return 34;
   return b1 + myvar;
}
int main()
{
    int b=344;
  //  printf("the address of b inside main is %d\n",&b);
   // int  val =fun1(b1);
     int  val = fun1(b); 
     val = fun1(b); // multiple timme call to func1
     val = fun1(b);
  //  int *ptr=&val;
 //   printf("the value od fun1 is %d",fun1());
// printf("the value fun1 is %d",val);
    return 0;
}