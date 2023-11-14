#include <stdio.h>
#include "tut.c"
// int sum;  //global variable or external storage clas
// int myfun(int a, int b)
// {
//  //auto int sum;// default value of local variable is garbage value
//   sum=a+b;
//   return sum;
// }

 //extern int sum ;
int main()
{
    //decleration - telling the compilar about the variable (no space reserved)
    //defination -  declearation +space reservetion
  // int sum =myfun(3,5);
  
 //int sum=98;
   printf("the sum is:%d",sum);
    return 0;
}