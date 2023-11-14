#include <stdio.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("myfile.txt", "a+");// a+ r+ w+ a r w mode we are using in the file .text 
    // char c=fgetc(ptr);
    // printf("the charecter i read was %c\n",c);
    
    // char str[15];
    // fgets(str,15,ptr);
    // printf("the string is %s\n",str);
    fputc('o',ptr);
    fputs("how are you",ptr);
     fclose(ptr);
    return 0;
}