#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    //determine overtime pay of 10 employee
    float otpay;
    int hour,i=1;
    while(i<=10)/* loop for ten employee*/
    {
        printf("enter no of hour you work\n");
        scanf("%d",&hour);
        if(hour>=40){
        otpay=(hour-40)*12;
        }
        else
        otpay=0;
        printf("hour=%d overtime pay =rs.%f\n",hour,otpay);
        i++;
    }
    return 0;
}