#include <stdio.h>
int main()
{
    // array in c language
    // data_type name [size]
    // or intialize it infront of the data_type name [size]={x,y,z...}
    /* int mark[4];
      mark[0]=34;
      printf("mark of student 1 is %d\n",mark[0]);
      mark[0]=434;
      mark[1]=4;
      mark[2]=34;
      mark[3]=23;
      printf("mark of student 1 is %d\n",mark[3]);
      return 0;
     */

    int mark[4];
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of %d element of an array\n", i);
        scanf("%d", &mark[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf(" the value of %d element of an array is %d\n", i, mark[i]);
    }

    return 0;
}