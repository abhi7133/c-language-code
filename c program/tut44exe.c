 //  you manage a travel agency and you want your driver to input thier following details
//    1 name 
//    2 driving license no 
//    3 route
//    4 kms 
//    create a structure


#include <stdio.h>
#include <string.h>
struct  detail
{
    char fname[50];
    char licence[34];
    char route[50];
    int kms;

}n1,n2,n3;

int main()
{
    
    
      printf("\nenter the fname");
      scanf("%s",&n1.fname[0]);
       printf("\nenter the licence no");
      scanf("%s",&n1.licence[0]);
       printf("\nenter the route");
      scanf("%s",&n1.route[0]);
      printf("\nenter the kms");
      scanf("%d",&n1.kms);

      printf("\nenter the fname");
      scanf("%s",&n2.fname[1]);
       printf("\nenter the licence no");
      scanf("%s",&n2.licence[1]);
       printf("\nenter the route");
      scanf("%s",&n2.route[1]);
       printf("\nenter the kms");
      scanf("%d",&n2.kms);
      


      printf("enter the fname");
      scanf("%s",&n3.fname[2]);
       printf("enter the licence no");
      scanf("%s",&n3.licence[2]);
       printf("enter the route");
      scanf("%s",&n3.route[2]);
       printf("enter the kms");
      scanf("%d",&n3.kms);

      printf("\n****printing the information of the drivers*****");

      
    printf("the name of first driver is %s\n",n1.fname);
    printf("the licence no of first driver is %s\n",n1.licence);
    printf("the route  of first driver is %s\n",n1.route);
    printf("the kms of first driver is %d\n",n1.kms);

    printf("the name of second driver is %s\n",n2.fname);
    printf("the licence no of second driver is %s\n",n2.licence);
    printf("the route  of second driver is %s\n",n2.route);
    printf("the kms of second driver is %d\n",n2.kms);

    printf("the name of third driver is %s\n",n3.fname);
    printf("the licence no of third driver is %s\n",n3.licence);
    printf("the route  of third driver is %s\n",n3.route);
    printf("the kms of third driver is %d\n",n3.kms);

    return 0;
}