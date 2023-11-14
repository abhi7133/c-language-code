/*
#include <stdio.h>
//call by refrence example
void changevalue (int *address)
{
    *address=345;
}
int main()
{
    int a=21,b=34;
    printf("the value of a is %d\n",a);
    changevalue(&a);
    printf("the value of a is after using changevalue function is %d\n",a);
    return 0;
}
*/

// quick quizz
// given two number a and b add then then subtract them and assign them to a and b using call
// by refrence
// a=34, b=6
//  after running the function , the values of a and b should be;
// a=40
// b=28

// call by refrence example
#include <stdio.h>
int operation(int *x, int *y)//in the pointer x and y the ADDRESS of a and b are store 
{
    int c,d;
     *x + *y;
     *x-*y;
    c= *x+*y;
    d= *x-*y ;
    *x=c;
    *y=d;
    return 0;
}
int main()
{
    int a = 34, b = 6;
    printf("the value of a is %d\n and b is %d\n ", a, b);

    operation(&a, &b); // in the call by refrence we are giving the address of the value where it is store
    printf("after using call by refrence in the function the value of a is %d\n and b is %d\n ", a, b);
    return 0;
}