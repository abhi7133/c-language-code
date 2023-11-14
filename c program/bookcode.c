
#include <stdio.h>
int main()
{
    // code for factorial value of number
   // fact(5):5*4*3*2*1=120
   //fact(6): 6*fact(5)
    int i, fact, num;
    printf("enter the number=%d");
    scanf("%d", &num);
     fact=1, i = 1;
    while (i<=num)
    {
        
        fact = fact * i;
        i++;
    }
    printf("factorial value of%d=%d\n", num, fact);
    return 0;
}


