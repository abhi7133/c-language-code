/*take a input from user and ask user to choose 0 for trangular star pattern
 and 1 for reserved trangular star pattern
 then print the star accordingly
 *
 **
 ***
 **** =trangular star pattern

 ****
 ***
 **
 * =reversed trangular star pattern
 */
#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, num;
    printf("to print trangular star use 0 and for reversed  trangular star use 1\n ");
    printf("how many rows do you want?\n");
    scanf("%d", &rows);
    printf("enter the num\n");
    scanf("%d", &num);
    switch (num)
    {
    case 0:
        starpattern(rows);
        break;
    case 1:
        reversestarpattern(rows);
        break;
    default:
        printf("invalid number\n");
    }
    return 0;
}