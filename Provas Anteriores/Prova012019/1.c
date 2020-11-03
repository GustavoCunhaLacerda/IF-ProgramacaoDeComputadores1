#include <stdio.h>

int ePrimo(int x);

int main() {
    int num, qte;
    scanf("%d", &num);
    for (int i = 2; num!=1; i++)
    {
        qte = 0;
        if (ePrimo(i) == 1)
        {
            while (num%i == 0)
            {
                num/=i;
                qte++;
            }
            if (qte!=0) printf("%d^%d ", i, qte);
        }
    }
    printf("\n");
    
    return 0;
}


int ePrimo(int x){
    if (x == 2) return 1;
    if (x%2 == 0) return 0;
    for (int i = 3; i < x; i+=2)
    {
        if (x%i == 0) return 0;
    }
    return 1;
}