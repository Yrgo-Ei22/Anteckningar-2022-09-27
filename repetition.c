/********************************************************************************
* repetition.c: Repetition av villkorssatser via ett program där användaren
*               ombeds mata in sin ålder som ett heltal. Utefter inmatat ålder
*               skrivs en kommentar om användarens ålder ut i terminalen.
********************************************************************************/
#include <stdio.h>

/******************************************************************************
* main: Deklarerar en variabel för att lagra inmatad ålder. Användaren ombeds
*       mata in sin ålder, som läses in som ett heltal. Utefter vilken ålder 
*       som matas in så skrivs en kommentar ut. Programmet itererar fem gånger.
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