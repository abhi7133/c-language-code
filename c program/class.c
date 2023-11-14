
// (" c ") language code of mzos class which are teach by the trainer and assignment question which is given by the trainer
/*
#include<stdio.h>
int main()
{
    printf("hello i am abhishek\n i am pursuing bachlor degree\n" );
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("\nenter a number a =");
    scanf("%d",&a);
    printf("\nenter a number b =");
    scanf("%d",&b);
    c=a+b;
    printf("\nthe addition is %d",c);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    float rc,ac,cc;
    printf("\nenter the radious of circle rc=");
    scanf("%f",&rc);
    cc=2*3.14*rc;
    ac=3.14*rc*rc;
    printf("the circumference of circle is %f",cc);
    printf("the area of circle is %f",ac);
    return 0;

}
*/
/*
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("enter value a,b,c,");
    scanf("%f%f%f\n",&a,&b,&c);
    float d;
    d=a+b+c;
    printf("the addition of a+b+c=%f",d);
     return 0;
}
*/

// volume of cube

/*

#include <stdio.h>
int main()
{
    int vc,side;
    printf("enter value of side");
    scanf("%d\n",&side);
    vc=side*side *side;
    printf("the volume of cube is %d\n",vc);
    return 0;

}
*/
// calculate volume of cube by using simple operation in c
// find the sum of 5 float numbers
// calculate area of circle
// calculate area of rectangle
// find simple interst by using c programming si=P*n*r/t
// calculate percentage of given number
// find sum and avg of 5 numbers

/*
#include <stdio.h>
int main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if (age>18)
    {
        printf("you are eligible to vote");
    }
    else
    {
        printf("you are not eligible");
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    if (a>b)
    {
        printf("a is greater than b\n");
    }
    else
    {
      printf("b is greater than a\n");
    }

    return 0;
}

*/

/*
#include <stdio.h>
int main()
{
   int year;
    printf("enter the year:");
    scanf("%d",&year);

    if (year%4==0)
    {
        printf("the year is leap year\n");
    }
     else{
        printf("the year is not leap year\n");
     }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
   int num;
    printf("enter the num:");
    scanf("%d",&num);
    if (100%num==0)
    {
        printf("the number is factor of 100");
    }
    else
    {
       printf("the number is not  factor of 100");
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int m1,m2,m3,avg;
    printf("enter the mark of m1\n");
    scanf("%d",&m1);
    printf("enter the mark of m2\n");
    scanf("%d",&m2);
    printf("enter the mark of m3\n");
    scanf("%d",&m3);
    avg=m1+m2+m3/3;
    printf("the avg is %d\n",avg);
   if(avg>70)
   {
    printf("the student get distinction\n");
   }
   else
   {
    printf("the student get pass\n");
   }
    return 0;
}
*/

// accept a character and show that wheter they are upper case or lower case

/*
#include <stdio.h>
int main()
{
    char ch,uppercase,lowercase;
  printf("enter the character:",ch);
  scanf(" %c",&ch);
  if(ch>='a' && ch<='z')
  {
    uppercase=ch-32;
    printf("\n the character is lower case character ");
    printf("\n the lower case convert into upper case is  %c",uppercase);
  }
  else if(ch>='A' && ch<='Z')
  {
    lowercase=ch+32;
    printf("\n the character is upper case character");
    printf("\n the lower case convert into lower case is  %c",lowercase);
  }

  else
  {
   printf("invalid alphabet");
  }


  return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);

    if(marks>=1 && marks<=39)
    {
        printf(" grade is F");
    }
    else if(marks>=40 && marks<=59)
    {
        printf("grade is c");
    }
    else if(marks>=60 && marks<=69)
    {
        printf(" grade is B");
    }
     else if(marks>=70 && marks<=100)
    {
        printf(" grade is A");
    }
     else if(marks<0 || marks<100)
    {
        printf("invalid marks");
    }
    else
    {
        printf("invalid marks ");
    }


    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if (ch == 'a' || ch=='e' ||ch== 'i' || ch=='o' || ch== 'u'|| ch=='A' || ch=='E' ||ch== 'I' || ch=='O' || ch== 'U' )
    {
        printf("the character is vowel");
    }
    else if (ch>='A' && ch<='Z' || ch>='a' && ch<='z' )
    {
        printf("the  character is consonent");
    }
    else
    {
        printf("invalid alphabet");
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    if(marks>60 )
    {
        printf("the garde of student is A");
    }
    else
    {
        printf("the grade of student is B");
    }
    return 0;
}
*/

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("enter the num:");
//      scanf("%d",&num);
//      if(num>0)
//      {
//         printf("the number is positive");
//      }
//      else
//      {
//         printf("the number is negative");
//      }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//      per;int
//      printf("enter the per:");
//      scanf("%d",&per);
//      if(per>=90)
//      {
//         printf("the grade is a");

//      }
//      else if(per>=70 && per<=90)
//      {
//         printf("the grade is b");
//      }
//      else
//      {
//         printf("fail");
//      }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//         int price,unit,rate;
//      printf("enter the unit:");
//      scanf("%d",&unit);
//      if(unit>100)
//      {
//         rate=20;
//         price=unit*rate;
//         printf("the price of light bill is %d",price);

//      }
//       else if(unit>=70 && unit<=100)
//      {
//         rate=15;
//         price=unit*rate;
//         printf("the price of light bill is %d",price);
//      }
//      else if (unit>=50 && unit<=70)
//      {
//          rate=10;
//         price=unit*rate;
//         printf("the price of light bill is %d",price);
//      }
//     else if (price<50)
//     {
//         rate=5;
//         price=unit*rate;
//         printf("the price of light bill is %d",price);

//     }
//     else{
//       printf("invalid price");

//     }
//       return 0;
//     }

/*
#include <stdio.h>
int main()
{
    int num, val;
    printf("enter the num:");
    scanf("%d", &num);
    printf("\nenter the num:1 for odd ,2 for even");
    printf("\nenter the val:");
    scanf("%d", &val);

    switch (num)
    {
    case 1:

        if (val % 2 != 0)
        {
            printf("\nthe number is odd number");
        }
        break;

    case 2:

        if (val % 2 == 0)
        {
            printf("\nthe number is even number");
        }
        break;

    default:
        printf("\nthe number is invalid");
    }

    return 0;
}
*/

/*
print 50 to 100 using while loop

#include <stdio.h>
int main()
{
    int num=50;
    while(num<=100)
    {
        printf("%d\n",num);
        num++;
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int num=1,even;
    while(num<=10)
    {
        if(num%2==0)
        {
        printf("the num is even %d\n",num);
        }
        num++;

    }
    return 0;
}*/

// table of 5 using the while loop
/*
#include <stdio.h>
int main()
{
    int num=5,table=1,multi;
    while(table<=10)
    {
       multi= num*table;
       printf("the multi is %d\n",multi);
       //printf("%d*%d\n",num*table);
        table++ ;
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int num=50;
    while(num>=1)
   {
       if(num%2==1)
       {
     printf("the num is odd %d\n",num);
   }
        num--;

    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int ch, d;
    char c;
    int a = 10, b = 20;
    do
    {
        printf("\n1.Add");
        printf("\n2.Sub");
        printf("\n3.mul");
        printf("\n Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nAdd=%d", a + b);
            break;
        case 2:
            printf("\nsub=%d", a - b);
            break;

        case 3:
            printf("\nmul=%d", a * b);
            break;

        default:
            printf("Wrong choice");
            break;
        }
        printf("\nDo you want more operation:(y/n)");
        scanf("%d", &d);
        scanf("%c", &c);
    } while (c == 'y');
}
*/

// create menu driven program for following operationa using do while loop
// while---1.even 2.odd  3.pos  4. neg

/*
#include <stdio.h>
int main()
{
    int ch, d;
    char c;
    int num;

    do
    {
        printf("\n1.even");
        printf("\n2.odd");
        printf("\n3.pos");
        printf("\n3.neg");
        printf("\nenter the choice:");
        scanf("%d", &ch);
        printf("enter the num:");
        scanf("%d", &num);
        switch (ch)
        {
        case 1:
          if ( num % 2 == 0)
          {
            printf("num is even");
          }
            break;

        case 2:
           if( num % 2 !=0)
           {
            printf("num is odd");
           }
            break;

        case 3:
          if ( num >= 0)
          {
            printf("the num is positive");
          }
            break;

        default:
            printf("Wrong choice");
            break;
        }
        printf("\nDo you want more operation:(y/n)");
        scanf("%d", &d);
        scanf("%c", &c);
    } while (c == 'y');
    return 0;
}
*/

// create menu driven program to display th following numbers
// 1.reverse 1to 10    2.odd numbers in between 1to 10      3.table of 10

// #include <stdio.h>
// int main()
// {
//     int num1 = 1;
//     int num2 = 10;
//     int num, ch,d;
//     char c;

//     do
//     {
//         printf("\n1.reverse 1 to 10");
//         printf("\n2.odd num in between 1 to 10");
//         printf("\n3.table of 10");
//         printf("\nenter the choice:");
//         scanf("%d",&ch);
//         switch (ch)
//         {
//         case 1:
//             while (num2 >= 1)
//             {
//                 printf("reverse the number:%d\n", num2);
//                 num2--;
//             }
//             break;
//         case 2:
//             while (num1 <= num2)
//             {
//                 if (num1 % 2 == 1)
//                 {
//                     printf("\nthe num %d is odd", num1);
//                 }
//                 num1++;
//             }
//             break;
//         case 3:
//             while (num1 <= num2)
//             {
//                 num = num2*num1;
//                 printf("the table of 10 is%d\n", num);
//                 num1++;
//             }
//             break;
//         default:
//             printf("you have enter the wrong choice\n");
//         }
//         printf("\ndo you want more operation:(y/n)");
//          scanf("%d", &d);
//         scanf("%c", &c);
//     } while (c == 'y');

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//      for (int i=5;i<=25;i++)
//      {
//         printf("the number is %d\n",i);
//      }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     for(int i=20;i<=40;i++)
//     {
//        if (i%2==0)
//        {
//         printf("\nthe number %d is even",i);
//        }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     {
//         for (int i = 40; i <= 100; i++)
//         {
//             if (i % 2 == 1)
//             {
//                 printf("\nthe number %d is even", i);
//             }
//         }
//         return 0;
//     }
// }

// #include <stdio.h>
// int main()
// {
//       for ( int i=-1;i>=-10;i--)
//       {
//         printf("the number is %d\n",i);
//      }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//      for(int i=1;i<=50;i++)
//         {
//       if (i%2==0)
//        {
//         printf("\nthe number %d is even",i);

//        }
//         if (i%2==1)
//        {
//         printf("\nthe number %d is odd",i);

//        }
//      }
//    return 0;

// }

// #include <stdio.h>
// int main()
// {
//     // prime number program
//     int num,i,count=0;
//     printf("\n enter the number");
//     scanf("%d",&num);
//     if(num==1 || num ==0)
//     {
//         printf("\nthe number is not prime");
//     }
//     for(i=1;i<=num;i++)
//     {
//      if(num%i==0)
//     {
//         count++;
//     }
//     }
//     if (count>2)
//     {
//         printf("\nthe number is not prime");
//     }
//      else
//     {
//         printf("\nthe num is prime");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//    for (int i=10;i>=1;i--)
//    {
//         printf("the number is %d\n",i);

//     }
//     return 0;
// }

/*
#include <stdio.h>
int main()
{
    int j=1;
   for (int i=1;i<5;i++,j=j+1)
   {
        printf("the number is %d %d\n",i,j);

    }
    return 0;
}
*/

// #include <stdio.h>
// int main()
// {
//     int i;
//     for(i=0;i<=10;i++)
//     {
//         if(i%2==0)
//         {
//             printf("%d\n",i);
//             printf("hi\n");
//         }
//     }
//     return 0;
// }

/* nested for loop is use for pattern making question
#include <stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/

// #include <stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("enter the value:%d",n);
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=10;j++)
//         {
//             printf(" %d\t",(i*j));
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//      int i,j;
//      for(i=1;i<=5;i++)
//      {
//         for(j=1;j<=i;j++)
//         {
//           printf("%c",'*');
//         }
//         printf("\n");

//      }
//     return 0;
// }

// printing star in reverse pattern
//  #include <stdio.h>
//  int main ()
//  {
//    int i,j;
//       for(i=1;i<=5;i++)
//       {
//          for(j=1;j<=5-i+1;j++)
//          {
//            printf("%c",'*');
//          }
//          printf("\n");

//      }
//     return 0;
// }

// or
/*
#include <stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
     {
        for(j=1;j<=i;j++)
        {
          printf("%c",'*');
        }
        printf("\n");

     }
    return 0;
}
*/

// right hand right angle triangle

// #include <stdio.h>
// int main()
// {
//     int i,j;
//     for(int i=1;i<=5;i++) // the outer for loop is for row
//     {
//         for(j=1;j<=5;j++) // the inner loop us for column in the pattern printing
//         {
//           if(j<=5-i){
//             printf(" ");
//           }
//           else
//           {
//             printf("%c",'*');
//           }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i,j,n=2;
//     for(i=1;i<=5;i++)
//     {
//       for(j=1;j<=i;j++)
//       {
//        printf("%d",j*2);

//       }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i,space,row,k=0;
//     printf("enter the number");
//     scanf("%d",&row);
//     for(i=1;i<=row;++i,k=0)
//     {
//         for(space=1;space<=row-i;++space)
//         {

//         }
//     }

//   return 0;
//}

// paramit of star

// #include<stdio.h>
//  int main()
// {
//     int i,space, rows,j;
//     printf("Enter the number of rows:");
//     scanf("%d",&rows);

//     for(i=1;i<=rows;i++)
//     {
//         for(space=1;space<=rows-i; space++)
//         {
//             printf(" ");
//         }

//     for(j=1;j<=i;j++)			//while(j<=i)
//     {
//         printf("* ");
//     }
//         printf("\n");
//     }

//  }

/*
#include <stdio.h>
int main()
{
    int i;
    for (i=1;i<=20;i++)
    {

        if(i==5)
          continue;
          printf("%d\n",i);
        if(i==10)
        break;

    }
    return 0;
}
*/

// function without return value without parameter
/*
#include <stdio.h>
 void add()
 {
    int a,b,c;
    printf("enter the num a and b:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("the addition is %d\n",c);
 }
 void sub()
 {
    int a,b,c;
    printf("enter the num a and b:");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("the subtraction is %d\n",c);
 }

 void multi()
 {
    int a,b,c;
    printf("enter the num a and b:");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("the multi is %d\n",c);
 }
 void div()
 {
    int a,b,c;
    printf("enter the num a and b:");
    scanf("%d%d",&a,&b);
    c=a%b;
    printf("the div is %d\n",c);
 }
int main()
{
    printf("\nprogram for functions");
     add();
     sub();
     multi();
     div();
    return 0;
}
*/

/*
#include <stdio.h>
 void add()
 {
    int a,b,c;
    printf("enter the num a and b:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("the addition is %d\n",c);
 }
 void sub()
 {
    int a,b,c;
    printf("enter the num a and b:");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("the subtraction is %d\n",c);
 }

 void multi()
 {
    int a,b,c;
    printf("enter the num a and b:");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("the multi is %d\n",c);
 }
 void div()
 {
    int a,b,c;
    printf("enter the num a and b:");
    scanf("%d%d",&a,&b);
    c=a%b;
    printf("the div is %d\n",c);
 }
int main()
{
    int cho;
    printf("\n1.add,2.sub,3.multi,4.div");
    printf("\nprogram for functions");
     printf("\nenter the choice:");
     scanf("%d",&cho);
     switch(cho)
     {
     case 1:
     add();
     case 2:
     sub();
     case 3:
     multi();
     case 4:
     div();
     default:
     printf("you have enter the invalid choice");
     }
    return 0;
}
*/

// function  with parameter without return value
/*
#include <stdio.h>
 void add(int i,int j)
 {
    i+j;
    printf("the addition is %d\n",i+j);
 }
int main()
{
   int a,b;
    printf("enter the num a and b:");
    scanf("%d%d",&a,&b);
    add(a,b);

    return 0;
}
*/

// function with return type without parameter
//  #include<stdio.h>
//  main()
//  {
//  	int result;

// 	result=add();
// 	printf("result=%d",result);// it takes a return value and print in main function
// }
// int add()
// {
// 	int a=10,b=20,c;
// 	c=a+b;

// 	return c,a;
// 	return a; //it gives the return value
// }

// Assingments: 19/8/2023

//  1.Implement the menu driven program for performing following operation by using third category
//             add(), sub(), mul(),div(),oddeven() function with return type without parameter

/*
#include <stdio.h>
int add()
{
    int a,b,c;
    printf("\nenter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
int sub()
{
    int a,b,c;
    printf("\nenter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a-b;
    return c;
}
int mul()
{
    int a,b,c;
    printf("\nenter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a*b;
    return c;
}
int div()
{
    int a,b,c;
    printf("\nenter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a/b;
    return c;
}
int oddeven()
{
    int d,e;
    printf("\nenter the value of d ");
    scanf("%d",&d);
    if (d%2==0)
    {

        return 1;

    }
    else
    {
        return 0;

    }


}
int main()
{
    int c,d,e,f,g;
    c=add();
    printf("\nthe addition is:%d",c);
   e= sub();
   printf("\nthe sub is:%d",e);
   f= mul();
   printf("\nthe multi is:%d",f);
   g= div();
   printf("\nthe div is:%d",g);
     d=oddeven();
     printf("\nthe number is odd if fun return 0 and return 1 if number is even ");
    printf("the number is %d",d);
    return 0;
}
*/

//  2.Implement the program to find the following areas by using forth category of function
//         1.area of circle();
//         2.area of rectangle();
//         3.area of traingle();

// #include <stdio.h>
// int acircle()
// {
//     int r,a;
//     printf("\nenter the radious r");
//     scanf("%d",&r);
//     a=3.14*r*r;
//     printf("\nthe area of circle is %d",a);

// }

// int arectangle()
// {
//     int l,w,a;
//     printf("\nenter the length l");
//     scanf("%d",&l);
//     printf("\nenter the width w");
//     scanf("%d",&w);
//     a=l*w;
//     printf("\nthe area of circle is %d",a);
// }

// int atrinagle()
// {
//     int b,h,a;
//     printf("\nenter the base b");
//     scanf("%d",&b);
//     printf("\nenter the hight h");
//     scanf("%d",&h);
//     a=1/2*b*h;
//     printf("\nthe area of triangle is %d",a);

// }
// int main()
// {
//     acircle();
//     arectangle();
//     atrinagle();

//     return 0;

// }

// 3.Implement the program for performing following operation by using functions using all categories
//         1.int posneg();
//         2.int avg(int,int,int,int,int);
//         3.void simpleintrest();
//         4.void circumferenceofcircle(int);

// factorial program using recursion function
// #include <stdio.h>
// int factorial(int n);

// int main()
// {
//     int n,result;
//     printf("enter the value ");
//     scanf("%d",&n);
//     result =factorial(n);
//     printf("the result is%d",result);
//     return 0;
// }
// int factorial(int n)
// {
//     if(n==0)
//     {
//        return 0;
//     }
//     else if(n==1)
//     {
//         return 1;
//     }
//     else
//    {                               // FACTORIAL OF 5 
//         return n*factorial(n-1);  //20 60 120 
//     }
// }

// #include <stdio.h>
// int fibonacii();
// int main()
// {
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//    fibonacii(n) ;
//     return 0;
// }
// int fibonacii(int n)
// {
//      int i,a,b;
//     for(i=0;i<=n;i++)
//     {

//     }
//}

// min max program  using array
//  #include <stdio.h>
//  int main()
//  {
//      int i,max=0;
//      int arr[5]={24,25,45,37,39};
//      for (i=0;i<5;i++)
//      {
//         if (arr[i]>max)
//         {
//           max=arr[i];
//         }

//     }
//     printf("the maximum number is%d",max);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i,min=25,a;
//     int arr[5]={24,25,45,37,39};
//     for(i=0;i<5;i++)
//     {
//         if(arr[i]<min)
//         {
//            a=arr[i];
//         }
//     }
//     printf("the num %d is minimum",a);
//     return 0;
// }

// matrix matrix multiplication
//  #include <stdio.h>
//  int main()
//  {
//      int i,j;
//      int arr[2][2] ={{2,3},{4,5}};
//      int arr1[2][2]={{4,5},{8,9}};
//      for(i=0;i<2;i++)  //row
//      {
//          for(j=0;j<2;j++) //column
//          {

//             arr[i][j]*arr1[i][j];

//       printf("%d\t",arr[i][j]*arr1[i][j]);

//         }
//         printf("\n");
//     }

//     return 0;
// }

// 1d array multiplication

// #include <stdio.h>
// int main()
// {
//     int arr[2];
//     int arr1[2];
//     int arr2[2];
//    int  i,j;
//    for(i=0;i<2;i++)
//    {
//     printf("enter the number in arr");
//      scanf("%d",&arr[i]);
//    }

//    for(i=0;i<2;i++)
//    {
//     printf("enter the number in the arr1");
//     scanf("%d",&arr1[i]);
//    }

//     for(j=0;j<2;j++)
//     {
//         arr2[j]=arr[j]+arr1[j];
//         printf("\nthe addition of 2 array is %d ",arr2[j]);
//     }
//     return 0;
// }

// multiplication 2 array

// #include <stdio.h>

// int main()
// {
//     int i;
//    int  arr1[4];
//    int arr2[4];
//    int arr3[4];
//     for(i=0;i<4;i++)
//     {
//         printf("enter the values in arr1:");
//         scanf("%d",&arr1[i]);
//     }
//     for(i=0;i<4;i++)
//     {
//         printf("enter the values for the arr2:");
//         scanf("%d",&arr2[i]);
//     }

//      for (i=0;i<4;i++)
//      {
//         arr3[i]=arr1[i]*arr2[i];
//         printf("%d\t",arr3[i]);
//      }
//     return 0;
// }

// comparision of number with value which is included in the 1d array

// #include <stdio.h>
// int main()
// {
//     int no,i;
//     int arr[4]={4,3,5,6};
//     printf("enter the number you want to compare:");
//     scanf("%d",&no);
//     for(i=0;i<4;i++)
//     {
//        if(arr[i]==no)
//        {
//         printf("\nat position %d the number %d is in the array",i,no);

//        }
//        else
//        {
//         printf("\nat position %d the number %d is  not in the array",i,no);
//        }

//     }

//     return 0;
// }

// pointer programs

// #include <stdio.h>
// int main()
// {
//     int var;
//     var=20;
//     int *ptra=&var;
//     // printf("%d\n",*ptra);
//     // printf("%d\n",&var);
//     // printf("%d",sizeof(ptra));
//     printf("%d",*ptra);
//     return 0;
// }

// pointer arthematic
// if we want to access the value in the array then use for loop and the ptr[i]
//  #include <stdio.h>
//  int main()
//  {
//      int i;
//      int arr[5]={2,3,47,8,4};
//      int *ptr=arr;
//      for(i=0;i<5;i++)
//      {
//      //    printf("%d\n",ptr[0]);
//      //    printf("%d\n",ptr[1]);
//      //    printf("%d\n",ptr[2]);
//      //    printf("%d\n",ptr[3]);
//      //    printf("%d\n",ptr[4]);
//       printf("%d\n",ptr[i]);
//      }
//      return 0;
//  }

// #include <stdio.h>
// int main()
// {
//     int *p;
//     int **pp;
//     int v=10;
//     p=&v;
//     pp=&p;
//     printf("the address in p is: %d",p);
//      printf("the address in pp is: %d",pp);

//       printf("the value in p is: %d",*p);
//        printf("the value in pp is: %d",**pp);
//     return 0;
// }


// ponter in function with return value with argument
// pointer using the function
// #include <stdio.h>
// int add(int,int);
// int main()
// {
//     int result,a=20,b=30;
//    int (*ptr)(int,int);
//    ptr=add;                  // we can pass function or any variable in pointer using & or directly assign that variable name
//    result = (*ptr)(a,b);
//    printf("the addition is:%d",result);
//     return 0;
// }
// int add(int a,int b)
// {
//     int c;
//      c=a+b;
//      return c;
// }

// pointer using function with return value and without argument

// #include <stdio.h>

// int oddeven(); // Function prototype

// int main() {
//     // Odd even program
//     int result;
//     int (*ptr)(); // Declare ptr as a function pointer with no arguments

//     ptr = oddeven; // Assign the address of the oddeven function to ptr
//     result = ptr(); // Call the function through the pointer

//     printf("%d", result);

//     return 0;
// }

// int oddeven() {
//     int i;
//     printf("\nEnter the value you want to check: ");
//     scanf("%d", &i);
//     if (i % 2 == 0) {
//         return 0;
//     } else {
//         return 1;
//     }
// }



// #include <stdio.h>
// // pointer in function with argument without return value
// int prime(int);
// int main()
// {
//     int num;
//     int (*ptr)(int);
//     ptr = prime;
//     printf("\n enter the number");
//     scanf("%d", &num);
//     (*ptr)(num);
//     return 0;
// }
// int prime(int num)
// {
//     int i, count = 0;
//     if (num == 1 || num == 0)
//     {
//         printf("\nthe number is not prime");
//     }
//     for (i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count > 2)
//     {
//         printf("\nthe number is not prime");
//     }
//     else
//     {
//         printf("\nthe num is prime");
//     }
// }

// pending question
/*
#include <stdio.h>
int main()
{
    int or,rev;
    printf("\n enter the original");
    scanf("%d",&or);
    if(or==rev)
    {
        printf("\n the number is palindrome number");
    }
    else{
         printf("\n the number is not palindrome number");
    }


    return 0;
}
*/

// create structure of employee id,name,salary

// #include <stdio.h>
// #include<string.h>
// struct employee
// {
//     int id;
//     char name[10];
//     int salary;

// }v,m;
// int main()
// {
//    v.id=3344;
//    strcpy(v.name,"vikas");
//    v.salary=55000;

//    printf("\nemployee id:%d,\nname:%s,\nsalary of vikas is:%d",v.id,v.name,v.salary);
//     return 0;
// }


// pending question
// #include <stdio.h>
// struct compony
// {
//    char cname[50]; 
//     struct employee
//     {
//         char name[50];
//         int id;

//     }
// }a;
// int main()
// {
//     struct employee a;
//     printf("enter the name of compony:");
//     scanf("%s",a.cname);
//     printf("enter the name:\n","enter the id:\n");
//     scanf("%s %d",&struct.a.name,&struct.a.id);
    
//     return 0;
// }