#include <stdio.h>
#include<string.h>
struct student
{
    int id;
    char fav_char;
    int marks;
    char name[50];

} harry,abhi,rohan;
int main()
{
    harry.id=1;
    harry.fav_char='m';
    harry.marks=95;
    abhi.id=2;
    abhi.fav_char='s';
    abhi.marks=80;
   
    rohan.id=3;
    rohan.fav_char='e';
    rohan.marks=77;
    printf("\n harry id is%d",harry.id);
    printf("\nharry fev_char is %c ",harry.fav_char);
    printf("\nharry got %dmarks",harry.marks);
    strcpy(harry.name,"harry is a powerfull guy");
    printf("\nthe harry name is :%s",harry.name);

    return 0;
}