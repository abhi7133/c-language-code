#include <stdio.h>
#include <conio.h>
int main()
{
    int i, age;
    for (i = 0; i <= 10; i++)
    {
        // break statement code
        printf("%d\nenter your age\n", i);
        scanf("%d", &age);
        /*    if (age > 10)
            {
                break;
            }

        */

        // continoue statement
        if (age > 10)
        {
            continue;
        }
        printf("we have not come across any continue statement");
    }
    return 0;
}