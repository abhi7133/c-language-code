//#include <stdio.h>
/*void message();// function prototype decleration
int main()
{
  //exercise on c function
  // if we return the void data type before the function its means its does not return any value
  message();//function call
printf("cry,and you stop the monotony\n");
return 0;
}
void message()
//function definition
 {
    printf("smile ,and the world smiles with you..\n");
}
*/

/*
//2) example
void italy();
void brazil();
void argentina();
int main()
{
    printf("im in main\n");
    italy();
    brazil();
    argentina();
    return 0;
    
}
void italy()
{
 printf("i am in italy\n");
}
void brazil()
{
    printf("i am in brazil\n");
}
void argentina()
{
    printf("i am in argentina\n");
}
*/


//sending and reciving value between function
/*#include<stdio.h>
int calsum (int a,int b, int c);
int main ()
{
    int a,b,c,sum ;
    printf("enter any three number");
    scanf("%d %d %d\n",&a,&b,&c);
    sum=calsum (a,b,c);
    printf("sum=%d\n",sum);
    return 0;
}
int calsum(int a,int b,int c)
{
  int d;
  d=a+b+c;
  return(d);
}
*/

// square of floating point number using function
/*
#include <stdio.h>
float square(float a)
{
    float b;
    b=a*a;
    return b;
}
int main ()
{
    float a,b;
    printf("enter any number");
    scanf("%f",&a);
     b=square(a);
     printf("square of %f is %f\n ",a,b);
     return 0;
}
*/


//program to calculate the power of value using c function

#include <stdio.h>
#include <math.h>
#include<conio.h>
float power(float,int);
int main()
{
    float x, pow;
    int y;
    printf ("\nenter any two numbers:");
    scanf("%f %d",&x,&y);
    pow= power(x,y);
    printf("%f to power %d=%f\n",x,y,pow);
    return 0;
}

float power(float x,int y)
{
    int i;
    float p=1;
    for(i=1; i<=y; i++)
    p=p*x;
    return (p);
}