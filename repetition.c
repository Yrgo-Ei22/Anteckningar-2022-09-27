/********************************************************************************
* repetition.c: Repetition av villkorssatser via ett program d�r anv�ndaren
*               ombeds mata in sin �lder som ett heltal. Utefter inmatat �lder
*               skrivs en kommentar om anv�ndarens �lder ut i terminalen.
********************************************************************************/
#include <stdio.h>

/******************************************************************************
* main: Deklarerar en variabel f�r att lagra inmatad �lder. Anv�ndaren ombeds
*       mata in sin �lder, som l�ses in som ett heltal. Utefter vilken �lder 
*       som matas in s� skrivs en kommentar ut. Programmet itererar fem g�nger.
********************************************************************************/
int main(void)
{
   int age = 1000;

   for (int i = 0; i < 5; ++i)
   {
      printf("Enter your age:\n");
      scanf_s("%d", &age);
      printf("\n");

      if (age >= 100)
      {
         printf("You are ancient!\n");
      }
      else if (age >= 65 && age <= 99)
      {
         printf("You are old!\n");
      }
      else if (age >= 18 && age <= 64)
      {
         printf("You are an adult!\n");
      }
      else if (age >= 0 && age <= 17)
      {
         printf("You are a child!\n");
      }
      else
      {
         printf("You are unborn!\n");
      }

      printf("\n");
   }

   return 0;
}