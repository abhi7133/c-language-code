// switch case code
// switch case is alternative of if else statement
// if we not apply break statement then it can print all the statement
#include <stdio.h>
#include <conio.h>
int main()
{
    int percentage,marks;
    printf("enter your percentage%d\n");
    scanf("%d", &percentage);
    printf("enter your marks%d\n");
    scanf("%d", &marks);
    switch (percentage)
    {
    case 90:
        printf("you are selected for job");
      //  break; // to break the statement after break it not going in the case 80, default.
      
    case 80:
        printf("you are not selected for job");
      //  break;
    default:
        printf("nothing is match");
         switch(marks)// nested switch case
      {
      case 45:
      printf("you are pass");
    }
    return 0;
}
}
