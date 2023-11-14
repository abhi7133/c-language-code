#include <stdio.h>
#include <conio.h>
#include <math.h>
/*int main()
{
    //typecasting code (tutorial code with harry)
    short a= 10;
    int b;
    b=a;
    printf("%d\n",a);
    printf("%d",b);

}
*/


int main()
{
    int a;
    int b;
    char c;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("A is %d\n",a);
    printf("enter the value of b\n");
    scanf("%f\n",&b);
    printf("B is %d\n",(int)b);
    printf("type any character : \n");
    scanf("%c",&c);
    printf("character is %d",(int) c);
    return 0;

}