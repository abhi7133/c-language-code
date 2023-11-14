#include<stdio.h>
void star(char str[])
{
  //  printf("print the string:%s\n",str);
    int i=0;  // null is character is the terminnation condition in the character array 
    while (str[i]!='\0') // \0 is a null value which is include in the array to not include the garbage value in the output 
    {
        printf("%c",str[i]);
        i++;
    }

}

int main()
{   
    // declare and initialize string
    char str[] = "abhishek";
 //   printf("%s\n",str); 
 //   gets(str) ; //for taking the input string from the user we use the gets function which is in the stdio library
 //   puts(str); // to print the string which is given by the user we use the put function which also predefined function 
    star(str);
    return 0;
} 