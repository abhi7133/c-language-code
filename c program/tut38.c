// #include <stdio.h>
// int main()
// {
//     // typedef <previous_name > <alias_name >
//     typedef unsigned long u1;
//     typedef int integer;
//     u1 l1,l2,l3,l4; 
//     integer a=34;
//     printf("%d",a);
//     return 0;
// }



#include<string.h>
typedef struct student
{
    int id;
    char fav_char;
    int marks;
    char name[50]

} std;

int main()
{
    std harry,abhi,rohan;
    harry.id=1;
    harry.fav_char='m';
    harry.marks=95;
    printf("\n harry id is%d",harry.id);
    printf("\nharry fev_char is %c ",harry.fav_char);
    printf("\nharry got %dmarks",harry.marks);
    strcpy(harry.name,"harry is a powerfull guy");
    printf("\nthe harry name is :%s",harry.name);
    abhi.id=2;
    abhi.fav_char='s';
    abhi.marks=80;
     //abhi.name='abhishek';
    rohan.id=3;
    rohan.fav_char='e';
    rohan.marks=77;

    return 0;
}