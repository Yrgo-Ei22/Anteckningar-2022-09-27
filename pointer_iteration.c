/********************************************************************************
* pointer_iteration.h: Demonstration av iteration genom array via pekare, som
*                      pekar på adressen för respektive element i en array
*                      en efter en. 
* 
*                      Motsvarande iteration genom en array döpt data kan 
*                      genomföras via pekare enligt nedan:
* 
*                      for (int i = 0; i < 5; ++i)
*                      {
*                         printf("%d\n", data[i]);
*                      }
* 
*                      I detta fall används en pekare i, som börjar på adressen
*                      till första elementet (data, samma som data + 0) och ökar 
*                      stegvis tills arrayens slut (data + 5, alltså adressen
*                      till första elementet + arrayens storlek). 
* 
*                      För att skriva ut innehållet som pekaren i pekar på vid 
*                      vid ett givet tillfälle används deferensoperatorn *,
*                      där *i = innehållet på den adress som i pekar på, vilket
*                      är ett av talet i arrayen data.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* main: Deklarerar en array innehållande fem heltal. Arrayens innehåll skrivs
*       ut via iteration med pekare. Notera att pekaren måste ha samma datatyp
*       som det den pekar på (pekare i pekar kontinuerligt på en konstant int,
*       därmed sätts i till en const int*).
********************************************************************************/
int main(void)
{
   const int data[5] = { 10, 20, 30, 40, 50 };

   for (const int* i = data; i < data + 5; ++i)
   {
      printf("%d\n", *i);
   }

   return 0;
}

