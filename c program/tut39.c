#include <stdio.h>
#include<string.h>
 union student 
    {
        //union is use for memory management of the memory
        // in union the it takes the large member  memory and share it with other MEMBER IN THE DATATYPE
        // in union we can access the one member at one time
        int id;
        int marks;
        char fav_char;
        char names[50];

    };
int main()
{
    union student s1;
    s1.id=1;
    s1.marks=45;
    s1.fav_char='u';
    strcpy(s1.names,"harry");
    printf("the id is %d\n",s1.id);
     printf("the marks is %d\n",s1.marks);
     printf("the fav-charis %c\n",s1.fav_char);
      printf("the names is %s\n",s1.names);

    return 0;
}