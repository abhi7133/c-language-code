#include <stdio.h>
/*
int fun1(int array[])
{
   int i;
 for(i=0;i<4;i++)
    {
       printf("the value at %d is %d\n",i,array[i]);
    }
    array[0]=3456;// very importent point that if you change any value here ,it get reflected in main()
}
*/

void fun2(int *ptra)
{
    int i;
 for(i=0;i<4;i++)
    {
       printf("the value at %d is %d\n",i,*(ptra+i));
    }
    *(ptra+2)=2345; // ptra+2 means the value at index 2 get change 
}

int main()
{
    int arr[] = {23, 34, 45, 5};
    //   printf("the value at index 0 is %d\n",arr[0]);
    //  fun1(arr);
    //  printf("the value at index 0 is %d\n",arr[0]);
    fun2(arr);
    fun2(arr);
    return 0;
}