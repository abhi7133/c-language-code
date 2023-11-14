#include <stdio.h>
#include <stdlib.h>
int main()
{
    // use of malloc
    // int *ptr;
    // int i, num;
    // ptr = (int *)malloc(3 * sizeof(int));
    // for (i = 1; i <4; i++)
    // {
    //     printf("\nenter the value of %d number of this array:", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (i = 1; i <4; i++)
    // {
    //     printf("\nthe value at  %d number in this array is:%d",i,ptr[i]);
    // }

    
    // // use of calloc
    // int *ptr;
    // int i, n;
    // printf("enter the size of the array do you want:");
    // scanf("%d",&n);
    // ptr = (int *)calloc(n,sizeof(int));
    // for (i = 1; i <=n; i++)
    // {
    //     printf("\nenter the value of %d number of this array:", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (i = 1; i <=n; i++)
    // {
    //     printf("\nthe value at  %d number in this array is:%d",i,ptr[i]);
    // }

    // use of realloc
    int *ptr;
    int i, n;
    printf("enter the size of the array do you want:");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    for (i = 1; i <=n; i++)
    {
        printf("\nenter the value of %d number of this array:", i);
        scanf("%d", &ptr[i]);
    }
    for (i = 1; i <=n; i++)
    {
        printf("\nthe value at  %d number in this array is:%d",i,ptr[i]);
    }

    printf("\nenter the new size of the array do you want:");
    scanf("%d",&n);
     
     //reallocation of  memory using the realloc() function in the same program
    ptr = (int *)realloc(ptr,n*sizeof(int));
    for (i = 1; i <=n; i++)
    {
        printf("\nenter the value of %d number of this array:", i);
        scanf("%d", &ptr[i]);
    }
    for (i = 1; i <=n; i++)
    {
        printf("\nthe value at  %d number in this array is:%d",i,ptr[i]);
    }
     
     free(ptr);  // using free() function of dynamic memory allocation we can free the memory of dynamically allocated at run time
    return 0;
}