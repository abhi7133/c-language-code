// recursion functiomn
// function are use to divide the c program in to smaller piece
// recursion is the process when a function calss a copy of itself to work on a smaller problem
// function call it self is called as recursion
// importent topic
// 0!=1 base case              this are termination condition of function or we  can can call is as a base condition
// 1!=1 base case              for factorial finding 
// n!= n*(n-1)!
#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    // factorial finding code
    int num;
    printf("enter any number you want to factorial of\n");
    scanf("%d", &num);
    printf("the factorial of num is %d is %d\n", num, factorial(num));
    return 0;
}