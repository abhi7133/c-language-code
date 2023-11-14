#include <stdio.h>
// exercise on array reversel
// target 68,6,5,4,3,2,1
// size= 7
// 1,2,3,4,5,6,68
// 68,6,5,4,3,2,1
// 68,6,5,4,3,2,1


void arrayrev(int arr[])
{
  int temp;
   for(int i =0;i<7/2;i++)  //7/2 to run the for loop in only half way 
    {
         //swap item arr[i] with item arr[6-i]
         temp=arr[i] ;//temp is arr[i] now TEMP IS 1 NOW
         arr[i]=arr[6-i];
        arr[6-i]=temp;
    }  
    
}
int main()
{
   
  int arr []={1,2,3,4,5,6,68};
 
  int i;
  printf("after reversing the array\n");
    for(int i =0;i<7;i++)
    {
         printf("the value of element %d is  %d\n",i,arr[i]);
    }
    arrayrev(arr);
    printf("after reversing the array\n");
    for(int i =0;i<7;i++)
    {
         printf("the value of element %d is  %d\n",i,arr[i]);
    }

    return 0;
}