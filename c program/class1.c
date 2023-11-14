// #include <stdio.h>
// int main()
// {
//     float ac,inr,intrest;
//     printf("enter the account balance:");
//     scanf("%f",&ac);
//      printf("enter the intrest rate :");
//     scanf("%f",&inr);
//     intrest=ac*inr;
//     printf("the intrest rate to be paid is %f",intrest);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("enter the age:");
//     scanf("%d",&age);
//     if(age>18)
//     {
//         printf("your eligible to vote");
//     }
//     else
//     {
//         printf("your not eligible to vote");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n1,n2;
//     printf("enter the numbers n1 and n2");
//     scanf("%d %d",&n1,&n2);
//     if(n1>n2)
//     {
//        printf("n1 is greater than n2");

//     }
//     else
//     {
//         printf("n2 is greater than n1");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int salary,bonous;
//     printf("enter the salary:");
//     scanf("%d",&salary);
//     if(salary>=1 && salary<=10000)
//     {
//         bonous=salary*20/100 ;
//         printf("the bonous is %d",bonous);
//     }
//     else if(salary>=10001 && salary<=50000)
//     {
//          bonous=salary*15/100 ;
//         printf("the bonous is %d",bonous);
//     }
//      else if(salary>=50001 && salary<=100000)
//     {
//          bonous=salary*10/100 ;
//         printf("the bonous is %d",bonous);
//     }
//      else if(salary>=100001 && salary<=500000)
//     {
//          bonous=salary*5/100 ;
//         printf("the bonous is %d",bonous);
//     }
//      else if(salary<=500000)
//     {

//         printf("you don't have any bonous");
//     }
//     else
//     {
//         printf("the salary is invalid");
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int rad;
//     int c,a,b;
//     printf("\n 1.radious,\n2.circumference of circle");
//       printf("\nenter the radious");
//     scanf("%d",&rad);
//     printf("\nenter the choice");
//     scanf("%d",&c);
//     switch(c)
//     {
//     case 1:
//      a= 3.14*rad*rad;
//      printf("\nradious of circle is:%d",a);
//      break;
//      case 2:
//      b=2*3.14*rad;
//      printf("\ncircumference of circle is:%d",b);
//      break;
//      default:
//      printf("\nyou have entered invalid choice");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//   char choice;
//   int num;
//    printf("\n E.even or odd \n F.whether the number is multiple or not");
//    printf("\n enter the num:");
//    scanf("%d",&num);
//    printf("\n enter the choice:");
//    scanf(" %c",&choice); // always take one space before the formatspecifier of the character
//   switch(choice)
//   {
//     case 'e':
//     case 'E':
//       if(num%2==0)
//       {
//         printf("%d the number is even",num);
//       }
//       else
//       {
//          printf("%d the number is odd",num);
//       }
//        break;
//     case 'f':
//     case 'F':
//      if(num%7==0)
//       {
//         printf("%d the number is multiple of 7",num);
//       }
//       else
//       {
//       printf("%d the number is not multiple of 7",num);
//       }
//       break;
//     default:
//     printf("\nthe choice is invalid");

//   }
//   return 0;
// }

// for loop program multiplication table for the accepted number
//  #include <stdio.h>
//  int main()
//  {
//    int num,count,multi;
//    printf("\nenter the number:");
//    scanf("%d",&num);
//    for(count=1;count<=10;count++)
//    {
//      multi= num*count;
//      printf("\ntable of given number:%d",multi);
//    }
//    return 0;
//  }

//even number between 1 to 20 and the count of even number
// #include <stdio.h>
// int main()
// {
//    int i,count=0;
//    for(i=1;i<=20;i++)
//    {
//      if(i%2==0)
//      {
//       count=count+1;
//       printf("\nthe number %d is even",i);
//      }
//    }
//    printf("\nthe count of even number:%d",count);
//   return 0;
// }

// sum of even number and sum of odd number between 1to 20
// #include <stdio.h>
// int main()
// {
//   int i,sume=0,sumo=0;
//   for(i=1;i<=20;i++)
//   {
//     if(i%2==0)
//     {
//       sume=sume+i;
    
//     }
//     else{
//       sumo=sumo+i;
       
//     }
//   }
//   printf("\nthe sum of even number is %d",sume);
//    printf("\nthe sum of odd number is %d",sumo);
//   return 0;
// }


// #include <stdio.h>
// int main()
// {
    
//     int num,fact;
//     printf("\nenter the num");
//     scanf("%d",&num);
//     for(fact=2;fact<=num/2;fact++)
//     {
//         if(num%fact==0 && fact%2!=0)
//         {
//             printf("\nthe %d fact is odd",fact);
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
    
//     int num,fact,sum=0;
//     printf("\nenter the num");
//     scanf("%d",&num);
//     for(fact=2;fact<=num/2;fact++)
//     {
//         if(num%fact==0)
//         {
//              sum=sum+fact;
            
//         }
//     }
//      printf("\nthe sum of factorial is %d",sum);
//     return 0;
// }


// include <stdio.h>
// int main()#
// {
//     int fact=1;
//     int i;
//     int num;
//     printf("enter the number");
//     scanf("%d",&num);
//     for(i=num;i>=1;i--)
//     {
//         fact=fact*i;
//     }
//     printf("%d",fact);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int t1=0,t2=1;
//    int nt;// next term
//    int num,i;
//    printf("\nenter the num");
//    scanf("%d",&num);
//    printf("\nthe t1=%d and t2=%d ",t1,t2);
//    for(i=3;i<=num;i++)
//    {
//       nt=t1+t2;
//       printf("%d",nt);
//       t1=t2;
//       t2=nt;
//    }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num, t1 = 0, t2 = 1;
//     printf("Enter a number :");
//     scanf("%d", &num);
//     printf("%d\n%d", t1, t2);
//     fflush(stdout);  // Force output to be displayed
//     for (int i = 3; i <= num; i++) {
//         int nextterm = t1 + t2;
//         t1 = t2;
//         t2 = nextterm;
//         printf("\n%d", nextterm);
//         fflush(stdout);  // Force output to be displayed
//     }
//     return 0;
// }

//accept a number and display the sum of cube of digits
// #include <stdio.h>
// int main()
// {
//    int num,numcopy,digit,cube,sum=0;
//    printf("enter the number");
//    scanf("%d",&num);
//    numcopy=num;
//    while(numcopy!=0)
//    {
//       digit=numcopy%10;
//       numcopy=numcopy/10;
//       cube=digit*digit*digit;
//       sum=sum+cube;
//    }
//    printf("the sum of cube of digit is %d",sum);
//    return 0;
// }

// accept a number and check whether it is armstrong number or not
//(armstrong number means the sum of cube of digit is equal to the original number)
// #include <stdio.h>
// int main()
// {
   
//   int num,numcopy,digit,cube,sum=0;
//   printf("enter the number");
//    scanf("%d",&num);
//    numcopy=num;
//    while(numcopy!=0)
//    {
//       digit=numcopy%10;
//       numcopy=numcopy/10;
//       cube=digit*digit*digit;
//       sum=sum+cube;
     
//    }
//    if(sum==num)
//    {
//       printf("the %d number is armstrong number",num);
//    }
//    else{
//       printf("the %d number is not armstrong number",num);
//    }
//    return 0;
// }

//accept a number and check whether it is palindrome or not
//(palindrome number means the reverse of that number is same as original number)
// #include <stdio.h>
// int main()
// {
   
//   int num,numcopy,digit,revnum=0;
//   printf("enter the number");
//    scanf("%d",&num);
//    numcopy=num;
//    while(numcopy!=0)
//    {
//       digit=numcopy%10;
//       numcopy=numcopy/10;
//       revnum=(revnum*10)+digit;
     
//    }
//    if(revnum==num)
//    {
//       printf("the %d number is palindrome number",num);
//    }
//    else{
//       printf("the %d number is not palindrome number",num);
//    }
//    return 0;
// }



//accept a number and check whether it is perfect number or not
//(perfect number is those whose factor addition is equal to the actual number)
// #include <stdio.h>
// int main()
// {
//    int fact,i,num,perfect;
//    int add=0;
//    printf("\nenter the number");
//    scanf("%d",&num);
//    int  numcopy=num;
//    for(i=(num-1);i>=1;i--)
//    {
//       if(num%i==0)
//       {
//          add=add+i;
//          printf("factors of number is %d\n",i);

//       }
      
//    }
//     printf("\naddition of factors is%d",add);
//     if(add==numcopy)
//     {
//       printf("\nthe number is perfect number");
//     }
//     else{
//       printf("\nthe not perfect number");
//     }

//    return 0;
// }



// accept a number and display foll menu
// 1. display factorial
// 2. display factors
// enter the choice:
// display the result for given choice
// the above thing must execute at least once mandatorily,
// second time onwards it must repeat based on users choice
// #include <stdio.h>
// int main()
// {
//     int num,choice;
//     char wish;
//     int fact =1;
//     printf("\nenter the number: ");
//     scanf("%d",&num);
//     printf("\n1.factorial,2.factor");
//     printf("\nenter the choice number:");
//     scanf("%d",&choice);
//     do
//     {
//         switch(choice)
//         {
//             case 1:
//             for( int i=num;i>=1;i--)
//             {
//                 fact=fact*i;
               
//             }
//              printf("\nthe factorial of number is:%d",fact);
//              break;

//              case 2:
             
//              for( int i=1;i<num;i++)
//              {
//                 if(num%i==0)
//                 {
//                     printf("\nthe factorial of number is:%d",i);
//                 }
//              }
//              break;
//              printf("\ndo you wish to continoue:(y/n)");
//              scanf("%c",&wish);
//         }
//     } while (wish=='y' || wish=='Y');
    
//     return 0;
// }


// prime number program

// #include <stdio.h>
// int main()
// {
//     int num,i;
//     int flag=0;
//     char wish;
    
//     printf("enter the number:");
//     scanf("%d",&num);
//     do
//     {
//     for(i=2;i<=num/2;i++)
//     {
//         if(num%i==0)
//         {
//             flag=1;
//             break;
//         }
//     }

//     if(flag==0)
//     {
//         printf("\nnumber is prime");
//     }
//     else
//     {
//         printf("\nnumber is not prime");
//     }
//     printf("\ndo you wish to continoue:(y/n)");
//     scanf("%c",&wish);
// }while(wish=='y' || wish=='Y');
//     return 0;
// }

// 1 2 3 4 
// 1 2 3
// 1 2 
// 1
// #include <stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=4;i++)
//     {
//         for(j=1;j<=4-i+1;j++)
//         {
//             printf("\t %d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 22
// 333
// 4444
// #include <stdio.h>
// int main()
// {
//     int i ,j;
//     for(i=1;i<=4;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// factors of num 121 to 130 using nested for loop
// #include <stdio.h>
// int main()
// {
//     int num,fact=0;
//     int i;
//     num=121;
//     for(num=121;num<=130;num++)
//     {
//         for(i=1;i<=num/2;i++)
//         {
//             if(num%i==0)
//             {
//                 printf("\nthe factor of %d is:%d",num,i);
//             }
//         }
//     }
    
//     return 0;
// }

//factorial of num 2 to 7 using nested for loop
// #include<stdio.h>
// int main()
// {
//     int num,i;
//     for(num=2;num<=7;num++)
//     {
//     int fact=1;
//        // printf("\nthe factorial of %d.........",num);
//         for(i=num;i>=1;i--)
//         {
//             fact=fact*i;
//         }
//      printf("\n the factorial of %d is %d",num,fact);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int digit,cube;
//     int sum=0;
//     int num;
//     for(num=200;num<=500;num++)
//     {
//         int numcopy=num;
//         sum=0;
//          while(numcopy!=0)
//    {
//       digit=numcopy%10;
//       cube=digit*digit*digit;
//       numcopy=numcopy/10;
//       sum=sum+cube;
     
//    }
//    if(sum==num)
//    {
//       printf("\nthe %d number is armstrong number",num);
//    }
   
//     }
//     return 0;
// }

// #include <stdio.h>
// void display()
// {
//     printf("\nhello i am abhi,currently i am pursuing fullstack webdevelopment course");
// }
// int main()
// {
//     display();
//     printf("\n program closed");
//     return 0;
// }

//simple program for function to calculate the function
// #include <stdio.h>
// void cal_sq()
// {
//     int sq,num;
//     printf("enter the number:");
//     scanf("%d",&num);
//     sq=num * num;
//     printf("square of num is %d",sq);
// }
// int main()
// {
//     cal_sq();
//     return 0;
// }

//function program to find the ciecumference and area of the circle
// #include <stdio.h>
// void circle(int rad)
// {
//     int circum,area;
//     circum=2*3.14*rad;
//     area=3.14*rad*rad;
//     printf("\nthe circumference of circle is:%d",circum);
//      printf("\nthe area of circle is:%d",area);
     
// }
// int main()
// {
//     int rad;
//     printf("\nenter the radious of circle:");
//     scanf("%d",&rad);
//     circle(rad);
//     return 0;
// }

//write the function program to check whether the charcter is vowel or not
// #include <stdio.h>
// void abc(char ch)
// {
//     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
//         printf("the character is vowel");
//     }
//     else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
//         printf("the character is vowel");
//     }
//     else{
//         printf("the character is not vowel");
//     }
// }
// int main()
// {
//     char ch;
//     printf("enter the character:");
//     scanf("%c",&ch);
//     abc(ch);
//     return 0;
// }

// #include <stdio.h>
// int perfect(int num){
//     int factor=0,sum=0;
//     for(int i=1;i<num;i++){
//      if(num%i==0){
//         printf("%d\n",i);
//        factor=i;
//        sum=sum+factor;
//      }
//     }
//  //   printf("%d",sum);
//      if(sum==num){
//         return 1;
//      }
//      else{
//         return 0;
//      }

//  }

//perfect number program.
// #include<stdio.h>
// int main()
// {
//    int num;
//    int sum=0;
//    printf("enter the number you want to check :");
//    scanf("%d",&num);
//    for(int i=1;i<num;i++){
//     if(num%i==0){
//         sum+=i;
//     }
//    }
//    if(sum==num){
//     printf("\nnumber is prefect number");
//    }
//    return 0;
// }

// #include <stdio.h>
// int checker(char ch){
//     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
//      return 1;
//     }
//     else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
//         return 1;
//     }
//     else if(ch=='*' ||ch=='$' ||ch=='@' ||ch=='!' ||ch=='^' ||ch=='#'||ch=='~'){
//         return -1;
//     }
//     else{
//         return 0;
//     }
    
// }
// int main()
// {
//     char ch;
//     printf("enter the character you want to check");
//     scanf("%c",&ch);
//     int result=checker(ch);
//     if(result==1){
//         printf("the character is vowel");
//     }
//     else if(result==-1) {
//         printf("the character is symbol");
//     }
//     else if(result==0){
//         printf("the character is not vowel");
//     }
//     else{
//         printf("invalid character");
//     }
//     return 0;
// }


// #include <stdio.h>
// int fun1(int num){
//  if(num>=1){
//     printf("number is poisitive number");
//     return 1;
//  }
//  else{
//     printf("number is negative number");
//     return 0;
//  }
 

// }
// int prime(int n){
//    for(int i=2;i<n;i++){
//      if(n%i==0){
//         return -1;
//      }
//      else{
//         return -2;
//      }
//    }
//  }
// int main()
// {
//     int num,p;
//     printf("enter the number");
//     scanf("%d",num);
//  int result = fun1(num);
//  if(result==1){
//   p= prime(num);
//  }
//  if(p==-1){
//    printf("ther number is not prime number");
//  }
//  else{
//      printf("the number is  prime number");
//  }
//     return 0;
// }

// #include <stdio.h>
// void rec(int *area,int *peri,int len,int bred){
//      *area=len*bred;
//      *peri=(len+bred) * 2;
// }
// int main()
// {
//    int len,bred,area=0,peri=0;
//    printf("enter the length and breadth of the rectangle:");
//    scanf("%d %d",&len,&bred);
//     rec(&peri,&area,len,bred);
//     printf("area of rectangle is %d and perineter of rectangle is %d",area,peri);
//    return 0;
// }


// #include <stdio.h>
// void p(int *power,int base,int index){
//    for(int i=1;i<=index;i++){
//       *power =*power * base;
//    }
// }
// int main()
// {
//    int base,index,power=1;
//    printf("enter the base and index:");
//    scanf("%d %d",&base,&index);
//    p(&power,base,index);
//    printf("the power of given example is :%d",power);
//    return 0;
// }

// array program
// #include <stdio.h>
// int main()
// {
//    int arr[5];
//    for(int i=0;i<5;i++){
//     printf("enter the element in the array:");
//     scanf("%d",&arr[i]);
//    }
//    for(int j=0;j<5;j++){
//     printf("arr[%d]*5=%d\n",j,arr[j]*5);
//    }

//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int arr[10];
//    for(int i=0;i<10;i++){
//     printf("enter the element in the array:");
//     scanf("%d",&arr[i]);
//    }
//    for(int i=0;i<10;i++){
//     if(arr[i]%2==0){
//         printf("\neven number in the array is arr[%d]=%d",i,arr[i]);
//     }
//    }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     float avg=0;
//     float sum=0;
//     float arr[7];
//    for(int i=0;i<7;i++){
//     printf("enter the element in the array:");
//     scanf("%f",&arr[i]);
//    }
//    for(int i=0;i<7;i++){
//        sum=sum+arr[i];
//    }
//    printf("the rainfall of the week is %f\n",sum);
//     avg=sum/7;
//    printf("average of rainfall in the week is %f\n",avg);
//     return 0;
// }

// finding the maximum number form the array
// #include <stdio.h>
// int main()
// {
//     int arr[5];
//    for(int i=0;i<5;i++){
//     printf("enter the element in the array:");
//     scanf("%d",&arr[i]);
//    }
//    int max=arr[0];
//    for(int i=1;i<5;i++){
//     if(max<arr[i]){
//         max=arr[i];
//     }
//    }
//     printf("max is %d",max);

//     return 0;
// }


// #include <stdio.h>
// void accept(int a[]){
//     for(int i=0;i<5;i++){
//         printf("enter the element in the array:");
//         scanf("%d",&a[i]);
//     }
// }

// void display(int a[]){
//     for(int i=0;i<5;i++){
//         printf("%d\n",a[i]);
//     }

// }

// int calcu(int a[]){
//     int sum=0;
//     for(int i=0;i<5;i++){
//         if(a[i]%2==0){
//         sum=sum+a[i];  
//         }     
//     }
//     return sum;
// }

// int main()
// {
//     int arr[5];
//     int size=sizeof(arr);
//     printf("%d",size);
//     accept(arr);
//     display(arr);
//     int result=calcu(arr);
//      printf("the even number is:%d",result);
//     return 0;
// }

// #include <stdio.h>
//     void accept(int a[]){
//     for(int i=0;i<5;i++){
//         printf("enter the element in the array:");
//         scanf("%d",&a[i]);
//     }
// }

// void display(int a[]){
//     for(int i=0;i<5;i++){
//         printf("%d\n",a[i]);
//     }

// }

// int prime(int a[]){
//      int p;
//     for(int i=0;i<5;i++){
//      p=0;
//         for(int j=2;j<a[i];j++){
//             if(a[i]%j==0){
//               p=1;
//             }
//         }
//     if(p==0){
//         printf("the number is prime %d\n",a[i]);
//     }
//     }

// }
// int main(){
//     int arr[5];
//     accept(arr);
//     display(arr);
//     prime(arr);
//     return 0;
// }

 

//  #include <stdio.h>
//  int fun1(char a[]){
//     int count=0,i=0;
//     while(a[i]!='\0')
//     {
        
//     if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'|| a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U') 
//        {
//         count++;
//      }
//      i++;
//     }
//     return count;
//  }
//  int main()
//  {
//     int count;
//     char arr[50];
//     printf("enter the string:");
//     gets(arr);
//    count= fun1(arr);
//    printf("the count of the vowel in the string is: %d",count);
//     return 0;
//  }


// #include <stdio.h>
// void replace(char a[]){
//     int i=0;
//     while(a[i] !='\0'){
//         if(a[i] ==' '){
//             a[i]='*';
//         }
//         i++;
//     }
// }
// void main()
// {
//     char a[10];
//     printf("\nenter the string :");
//     gets(a);
//     printf("\nbefor replacing the space with * the string is %s",a);
//     replace(a);
//     printf("%s\n",a);
// }

// #include <stdio.h>
// void a(char s[],char d[]){
//     int i=0;
//     while(s[i]!='\0'){ 
//         if(s[i]>='a' && s[i]<='z'){
//             d[i]=s[i]-32;
//     }
//     else{
//         d[i]=s[i]+32;
//     }
//       i++;
//     }
//     d[i]='\0';
    
// }
// void main()
// {
//    char str1[]="Ahmednagar";
//    char str2[11];
//    a(str1,str2);
// printf("%s",str2);

// }

// #include <stdio.h>
// #include<stdlib.h>
// int main(){
//   int* arr;
//    int n;
//    int a=0;
//   arr=(int*)malloc(n*sizeof(int));
//    printf("enter the number of marks you want:");
//    scanf("%d",&n);
//   for(int i=0;i<n;i++){
//     printf("enter the marks:");
//     scanf("%d",&arr[i]);
//   }
//   for(int i=0;i<arr[i];i++){
//       if(a<arr[i])
//       {
//         a=arr[i];
//       }
     
//   }
//   printf("%d",a);
//free(arr);
// }


// we don't allocate a array for n numbers so we use dynamic memory allocation 
//  malloc 
//  calloc
//  recalloc

// #include <stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int days;
//     float* arr;
//     float sum=0;
//     arr=(float*)calloc(days,sizeof(float));
   
//    printf("enter the no of days of rainfall: ");
//    scanf("%d",&days);
//    for(int i=0;i<days;i++){
//     printf("enter the rainfall percentage:");
//     scanf("%f",&arr[i]);
//    }
//    for(int i=0;i<arr[i];i++){
//       sum=sum+arr[i];
//    }
//    float avg=sum/days;
//    printf("average of the rainfall is %f",avg);
//    free(arr);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int arr[10];
//     for(int i=0;i<10;i++){
//         printf("enter the value:");
//         scanf("%d",&arr[i]);
//     }
//  //   arr[7]=32;
//     for(int i=0;i<10;i++){
//         printf("\nthe value at index %d is %d",i,arr[i]);
//     }

//     return 0;
// }