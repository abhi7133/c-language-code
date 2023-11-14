#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    // goto statement of c language
    int x;
    for (int i = 0; i < 5; i++)
    {
        printf("\nhey guy\n\n");
        for (int j = 0; j < 0; j++)
            ;
        {
            printf("type any no.& to exit press: 1\n");
            scanf("%d", &x);
            if (x == 1)
            {
                goto end; // this goto will transfer control to end : i.e. out of the both loop
            }
        }
    }
end:
    printf("\'for\'loops are skipped as you press 1");

    return 0;
}