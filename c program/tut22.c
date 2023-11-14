#include <stdio.h>
int main()
{

   /*
   convert
   kms to mile
   inches to foot
   cms to inches
   pound to kgs
   inches to meters
   */
   char input;
   float kmstomile = 0.621371;
   float inchestofoot = 0.0833333;
   float cmstoinches = 0.393701;
   float poundtokgs = 0.453592;
   float inchestometers = 0.0254;
   float first;
   float second;

   while (1)
   {
      printf("enter the  input character . q to quit\n   1.kms to mile\n 2.inches to foot\n 3.cms to inches\n  4.pound to kgs\n 5.inches to meter\n ");
      scanf("%c", &input);

      switch (input)
      {
      case 'q':
         printf("quiting the program");
         break;

      case '1':
         printf("enter the quantity in term of fist unit\n");
         scanf("%f", &first);
         second = first * kmstomile;
         printf("%f kms  is equal to %f miles\n ", first, second);
         break;

      case '2':
         printf("enter the quantity in term of fist unit\n");
         scanf("%f", &first);
         second = first * inchestofoot;
         printf("%f inches is equal to %ffoot\n ", first, second);
         break;

      case '3':
         printf("enter the quantity in term of fist unit\n");
         scanf("%f", &first);
         second = first * cmstoinches;
         printf("%f cms is equal to %f inches\n ", first, second);
         break;

      case '4':
         printf("enter the quantity in term of fist unit\n");
         scanf("%f", &first);
         second = first * poundtokgs;
         printf("%f pound is equal to %f kgs \n ", first, second);
         break;

      case '5':
         printf("enter the quantity in term of fist unit\n");
         scanf("%f", &first);
         second = first * inchestometers;
         printf("%f inches is equal to %f meters\n ", first, second);
         break;
      }
   }

   return 0;
}