/********************************************************************************
* pointer_iteration.h: Demonstration av iteration genom array via pekare, som
*                      pekar p� adressen f�r respektive element i en array
*                      en efter en. 
* 
*                      Motsvarande iteration genom en array d�pt data kan 
*                      genomf�ras via pekare enligt nedan:
* 
*                      for (int i = 0; i < 5; ++i)
*                      {
*                         printf("%d\n", data[i]);
*                      }
* 
*                      I detta fall anv�nds en pekare i, som b�rjar p� adressen
*                      till f�rsta elementet (data, samma som data + 0) och �kar 
*                      stegvis tills arrayens slut (data + 5, allts� adressen
*                      till f�rsta elementet + arrayens storlek). 
* 
*                      F�r att skriva ut inneh�llet som pekaren i pekar p� vid 
*                      vid ett givet tillf�lle anv�nds deferensoperatorn *,
*                      d�r *i = inneh�llet p� den adress som i pekar p�, vilket
*                      �r ett av talet i arrayen data.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* main: Deklarerar en array inneh�llande fem heltal. Arrayens inneh�ll skrivs
*       ut via iteration med pekare. Notera att pekaren m�ste ha samma datatyp
*       som det den pekar p� (pekare i pekar kontinuerligt p� en konstant int,
*       d�rmed s�tts i till en const int*).
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

