#include <stdio.h>
#include <math.h>

typedef unsigned long long llint;


int main (void) {

   long int p = (long int) (pow (2.0, 23.0) -1.0);
   long int q = 1000;

   long int primos[q];

   long int i=5, j=0, k=0, l=1, m=0;

   for (m=0; m<q; m++) primos[m]=1;

   primos[0]=2;
   primos[1]=3;

    while (i<p && l<q){

      j = 0;
      k= (long int) sqrt((double)i);

      while ((primos[++j]<k) && (i%primos[j]));

      if (primos[j]>k) primos[++l] = i;

      i+=((i%3==2)?2:4);

   }

   for (m=0; m<l; m++) printf ("%ld ",primos[m]);

   return 0;
}