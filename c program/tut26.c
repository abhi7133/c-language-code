#include <stdio.h>

int main()
{
    printf("lets learn about pointer\n");
    int a= 76; 
    int* ptra = &a;
    int *ptra2 = NULL;
    // to print number in hexa decimal we can use %x
    printf("the value of a  is %d\n",*ptra); //*ptra means the value of a is show by the ptra 
     printf("the address  of a  is %p\n",&a); // address of a is shown 
     printf("the address  of a  is %p\n",ptra);// the address of a is shown by the ptra (pointer )
      printf("the address  of a  is %p\n",&ptra);// in this the pointer address is shown 
      printf("the address  of a  is %d\n",a);// simple a value is display
      printf("some garbage value is %d\n",ptra2); // in this we show the will the help of null  we can give pointe a null value 
    //if we not given the null to the ptra (pointer) then it will display the garbage
    
    return 0;
}

