#include <stdio.h>
#include <stdlib.h>

int quantidade_de_bits(int number) {
    if (number == 0 || number == 1)
        return 1;
    return quantidade_de_bits(number/2)+1;
}

int main() {
    int nu;
    scanf("%d", &nu);

    int qte = quantidade_de_bits(nu);
    printf("%d\n", qte);
    return 0;
}