#include <stdio.h>

/*generate all prime number from 1 to 300*/
/*
int main()
{
    int i, n = 1;
    printf("%d\nprime number between 1 to 300 are :\n1\t");
    for (n = 1; n <= 300; n++)
    {
        i = 2;
        for (i = 2; i <=n; i++)//1 to 300 every num is check if the remider is not dividing by it self then it is not prime
        {
            if (n % i == 0)
                break;
        }
        if (i == n)
            printf("%d\t", n);
    }
    return 0;
}
*/

int main()
{
    // generate all possible combination of 1  2  3
    int i = 1, j = 1, k = 1;
    for(i=1;i<=3;i++)
    {
       for(j=1;j<=3;j++)
       {
         for(k=1;k<=3;k++)
         {
           printf("%d %d %d\n",i,j,k);
         }
       }
       
    }
    return 0;
}