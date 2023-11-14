#include <stdio.h>
int main()
{
    //PREDEFINED MACROS
    printf("the current file name is %s\n",__FILE__);
    printf("the current DATE  is %s\n",__DATE__);
     printf("the current time  is %s\n",__TIME__);
      printf("the LINE NO   is %d\n",__LINE__);
        printf("the anscii is %d\n",__STDC__);
      
    return 0;
}