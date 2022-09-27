/********************************************************************************
* calculator.c: Implementering av en miniräknare via användning av switch-satsen.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* calculate: Beräknar summan, differensen, produkten eller kvoten av två flyttal.
*            
*            - x: Det första flyttalet.
*            - y: Det andra flyttalet.
*            - c: Matematisk operand (+, -, * eller /) som ett tecken.
********************************************************************************/
void calculate(const double x, 
               const double y,
               const char c)
{
   switch (c) 
   {
      case '+': 
      {
         printf("%lg + %lg = %lg\n\n", x, y, x + y);
         break; 
      }
      case '-':
      {
         printf("%lg - %lg = %lg\n\n", x, y, x - y);
         break; 
      }
      case '*':
      {
         printf("%lg * %lg = %lg\n\n", x, y, x * y);
         break;
      }
      case '/':
      {
         if (y == 0)
         {
            printf("Cannot divide by 0!\n\n");
         }
         else
         {
            printf("%lg / %lg = %lg\n\n", x, y, x / y);
         }

         break;
      }
      default:
      {
         printf("Invalid operand!\n\n");
         break;
      }
   }

   return;
}

/********************************************************************************
* get_char: Läser in ett tecken från tangentbordet och returnerar vid återhoppet. 
*           Inläsning sker kontinuerligt tills det tecken som läses in inte
*           är ett nyradstecken (vilket uppstår via nedtryckning av ENTER).
********************************************************************************/
char get_char(void)
{
   char c;

   while (1)
   {
      c = getchar(); 
      if (c != '\n') break;
   }

   return c;
}


/********************************************************************************
* main: Implementerar en miniräknare, som tar två flyttal samt en matematisk
*       operand i form av tecken +, -, * eller /. Utefter angiven operand
*       beräknas antingen summan, differensen, produkten eller kvoten av
*       de två flyttalen ut, med undantag för då nämnaren är 0 vid division
*       samt vid inmatning av en felaktig operand. Miniräknaren körs 
*       kontinuerligt, där de två flyttalen samt den matematiska operanden
*       läses in från tangentbordet.
********************************************************************************/
int main(void)
{
   double x, y;
   char c;

   while (1)
   {
      printf("Enter a first number:\n");
      scanf_s("%lg", &x);

      printf("\nEnter an operand (+, -, * or /):\n");
      c = get_char();

      printf("\nEnter a second number:\n");
      scanf_s("%lg", &y);

      printf("\n");

      calculate(x, y, c);
   }

   return 0;
}