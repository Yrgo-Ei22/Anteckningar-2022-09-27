/********************************************************************************
* calculator.c: Implementering av en minir�knare via anv�ndning av switch-satsen.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* calculate: Ber�knar summan, differensen, produkten eller kvoten av tv� flyttal.
*            
*            - x: Det f�rsta flyttalet.
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
* get_char: L�ser in ett tecken fr�n tangentbordet och returnerar vid �terhoppet. 
*           Inl�sning sker kontinuerligt tills det tecken som l�ses in inte
*           �r ett nyradstecken (vilket uppst�r via nedtryckning av ENTER).
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
* main: Implementerar en minir�knare, som tar tv� flyttal samt en matematisk
*       operand i form av tecken +, -, * eller /. Utefter angiven operand
*       ber�knas antingen summan, differensen, produkten eller kvoten av
*       de tv� flyttalen ut, med undantag f�r d� n�mnaren �r 0 vid division
*       samt vid inmatning av en felaktig operand. Minir�knaren k�rs 
*       kontinuerligt, d�r de tv� flyttalen samt den matematiska operanden
*       l�ses in fr�n tangentbordet.
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