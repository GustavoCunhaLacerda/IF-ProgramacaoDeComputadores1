#include <stdio.h>
#include <string.h>


int main() {
    int n, num_dec, unidade_dec, dezena_dec, centena_dec, milhar_dec; 
    char num_romano[15];
    char unidade_romano[10][5] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char dezena_romano[10][5]  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char centena_romano[10][5] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char milhar_romano[10][4]  = {"", "M", "MM", "MMM"};

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_dec);

        milhar_dec  = num_dec/1000;
        centena_dec = (num_dec%1000)/100;
        dezena_dec  = ((num_dec%1000)%100)/10;
        unidade_dec = (((num_dec%1000)%100)%10)/1;

        strcpy(num_romano, milhar_romano[milhar_dec]);
        strcat(num_romano, centena_romano[centena_dec]);
        strcat(num_romano, dezena_romano[dezena_dec]);
        strcat(num_romano, unidade_romano[unidade_dec]);

        puts(num_romano);
    }
    
    return 0;
}