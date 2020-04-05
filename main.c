#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int
main ()
{
  int hrac;
  int hskore;
  int askore;
  int AI;
  int kola;
  int kolo = 1;
  printf ("KAMEN NUZKY PAPIR!!!\n");
  printf ("na kolik kol se bude hrat?\n");
  scanf ("%i", &kola);
  while (kolo <= kola)
    {
      AI = 0;
      kolo++;
      printf ("CO DAS?\nkamen=1\nnuzky=2\npapir=3\n");
      scanf ("%i", &hrac);
      while (hrac >= 4)
	{
	  printf ("CHYBA zkuste znova\n");
	  scanf ("%i", &hrac);
	};
      AI = rand () % 3 + 1;
      printf ("protivnik dal %i\n", AI);
      if (hrac == 1 && AI == 1)
	{
	  printf ("remiza\n\n");
	};
      if (hrac == 1 && AI == 2)
	{
	  printf ("vyhral jsi toto kolo\n\n");
	  hskore++;
	};
      if (hrac == 1 && AI == 3)
	{
	  printf ("prohral jsi toto kolo\n\n");
	  askore++;
	};
      if (hrac == 2 && AI == 1)
	{
	  printf ("prohral jsi toto kolo\n\n");
	  askore++;
	};
      if (hrac == 2 && AI == 2)
	{
	  printf ("remiza\n");
	};
      if (hrac == 2 && AI == 3)
	{
	  printf ("vyhral jsi toto kolo\n\n");
	  hskore++;
	};
      if (hrac == 3 && AI == 1)
	{
	  printf ("vyhral jsi toto kolo\n\n");
	  hskore++;
	};
      if (hrac == 3 && AI == 2)
	{
	  printf ("prohral jsi toto kolo\n\n");
	  askore++;
	};
      if (hrac == 3 && AI == 3)
	{
	  printf ("remiza\n\n");
	};
    };
  if (hskore > askore)
    {
      printf ("VYHRAL JSI!!!");
    };
  if (askore > hskore)
    {
      printf ("PROHRAL JSI!!!");
    };
  if (hskore == askore)
    {
      printf ("REMIZA!!!");
    };
  return 0;
}
