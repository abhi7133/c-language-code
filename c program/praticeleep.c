#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    //check whether year is leap or not 
    // 1) 100 centuries year in which the difference is 400 is leap year 1200 1600
    // year which is divisible by 4 is also leap year2012, 2016
    //2100 2200 2300 is not leap year because its difference is 100 year we want diff is 400 years
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    if(year%400==0){
        printf("it is leap year\n");
    }
    else if (year%4==0 && year%100!=0){
        printf("year is leap year\n");

    }
     else
      printf("year is not leap year\n");

    
}