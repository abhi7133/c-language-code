#include <stdio.h>
int main()
{
  // basic pointer arthematic
  /* int a=34;
   int* ptra =&a;
   printf("%d\n",ptra);
   ptra++;
    printf("%d\n",ptra);
   printf("%d",ptra-1);
   return 0;
   */
  int arr[] = {23, 34, 311, 29};
  int *arrayptra = arr;
  printf("value at the position 3 of the array is %d\n", arr[3]);   // we can find out the value ate 3 position
  printf("the address of first element of array is %d\n", &arr[0]); // we can find out the address of the first element
  printf("the address of first element of array is %d\n", arr);
  printf("the address of second element of array is %d\n", &arr[1]);
  printf("the address of second element of array is %d\n", arr + 1);

  printf("the address of first element of array is %d\n", *(&arr[0])); // it is called as defferenceing in this we add the * to the *(&arr[0]) to find the value of that address
  printf("the  value at address of first element of array is %d\n", *(arr));
  printf("the value at address of second element of array is %d\n", *(&arr[1]));
  printf("the value at address of second element of array is %d\n", *(arr + 1));

  // if we increment the arr  like arr++ the it will show the error

  return 0;
}