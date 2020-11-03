#include <stdio.h>
#define true 1
#define false 0
#define MAXPRIMES 1000000
void vetP();
unsigned int num[MAXPRIMES];
unsigned int next, prindex;
// int ePrimo(int x){
//     // if(x == 1) return false;
//     // if(x == 2) return true;
//     // if(x%2 == 0) return false;
//     // for (int a = 3; a < x/2; a+=2) {
//     //     if(x%a == 0) return false;
//     // }
//     // return true;
//     for (int i = 0; i < MAXPRIMES && x >= num[i]; i++)
//     {
//         if (num[i] == x)
//         {
//             return true;
//         }
        
//     }
//     return false;
    
// }

int ePrimo(int chave){  
    int inf,sup,meio, N = MAXPRIMES;
    inf=0;
    sup=N-1;
    while (inf<=sup)
    {
        meio=(inf+sup)/2;
        if (chave==num[meio])
            return true;
        else if (chave<num[meio])
            sup=meio-1;
        else
            inf=meio+1;
    }
    return false;   /* não encontrado */
}

int main() {
    int n, primoArrojado = true, numAux, qte = 0, w = 3;
    // scanf("%d", &n);
    // num[0] = 2;
    // for (int i = 1; w <= n; i++, w+=2)
    // {
    //     num[i] = w;
    // }
    vetP();
    puts("Primos arrojados:");
    for (int i = 0; i < MAXPRIMES; i++)
    {
        if (ePrimo(num[i]) == true)
        {
            numAux = num[i];
            for (int j = 0; numAux > 0 && primoArrojado == true; j++) {
                if( ePrimo(numAux) == false || numAux == 1) primoArrojado = false;
                numAux/=10;
            }
        }
        else primoArrojado = false;
        
        if (primoArrojado == true) printf("%d, ", num[i]), qte++;
        // else puts("N");

        primoArrojado = true;
    }
    printf("\n%d\n", qte);
    
    
    return 0;
}

void vetP(){
   unsigned int i;
   num[0]=1; num[1]=2; num[2]=3;
//    printf("%10d\n", num[0]);
//    printf("%10d\n", num[1]);
   next=3;
   prindex=2;
//    printf("%10d\n", next);
   while(1){   //loop1
   loop1:
      next +=2;
      for (i=2; ; i++){
        if ((next % num[i])==0) goto loop1;
        if (next / num[i] <= num[i]) break;
      }
      prindex++;
      num[prindex]=next;
    //   printf("%10d\n", next);
   if (prindex==MAXPRIMES-1) break;
  }    
  for (int i = 0; i < MAXPRIMES; i++)
  {
      printf("%d\n", num[i]);      
  }
     
}
