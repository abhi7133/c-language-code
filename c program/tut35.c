// string in a function
#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "abhishek";
    char s1[] = "dhanapune";
    char s2[34];

    // printf("combination of two string is %s\n",strcat(s,s1));
    // puts(strcat(s,s1));// thing function is use for the combination of two string
    // puts(strrev(s)); //it is use for the reverse the string
    // printf("the length of s1 is %d\n",strlen(s1));// thing function shows the length of string
    printf("\nthe s is copy in s2  of string is %s",strcpy(s2,s));// thing function copy the string in another string
    printf("\ncomparision of two string is %d", strcmp(s, s1)); // it returns the ascii difference of two string

    return 0;
}
