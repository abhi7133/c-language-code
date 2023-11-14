#include <stdio.h>
int main()
{
    int num,rem,rev=0;
    int orig;
    printf("\nprogram for palindrom number");
    printf("\nenter the number:");
    scanf("%d",&num);
    orig=num;
    while(num!=0)
    {                       //num=121           12                1               0!=0 condition false loop terminate
        rem=num%10;         //rem=121%10=1       2                1%10=1
        rev=rev*10+rem;     // rev=0*10+1=1      1*10+2=12         12*10+1=121
        num=num/10;         //num=12             12/10=1            1/10=0
    }  
// palindrome number means 121==121 means if we reverse any number but after the reversing thast number its value are same the it is paliundrome number
    if(orig==rev)
    {
        printf("\nthe %d is palindrome number",orig);
    }
    else{
        printf("\nthe %d is not palindrome number",orig);
    }

    return 0;
}