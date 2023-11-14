/*
//if else statement code
//if ,if else,nested if else statement is a conditional statement
// it is use when we have to perform operation based on some condition 
#include <stdio.h>
int main()
{
    int age;
    printf("enter your age %d\n");
    scanf("%d",&age);
    printf("you have enter your age %d\n",age);
    if(age>=18){
        printf("you can vote !");
    }
   else if(age>10){
            printf("you can vote for children");
    }
    
    else{
        printf("you cannot vote");
    }
}
*/
#include<stdio.h>
int main()
{
    int subject;
     printf("enter 1 for math,enter 2 for science,enter 3 for both\n ");
    printf("enter in which subject you are pass %d\n");
    scanf("%d",&subject);
    if(subject==1){
        printf("you have got 15ruppes");
    }
    else if(subject==2){
        printf("you have got 15ruppes");
    }
    else if (subject==3){
        printf("you have got 45 ruppes");
    }
    else{
        printf("you are fail");
    }
    return 0;
}
