#include <stdio.h>


int main() {
    long int primos[600], nums[100000];
    long int n, maior, check = 1;

    scanf("%ld", &n);
    for (long int m = 0; m < n; m++)
    {
        scanf("%ld", &nums[m]);
        if (m == 0)
        {
            maior = nums[m];
        }
        else if (nums[m] > maior)
        {
            maior = nums[m];
        }
    }

    primos[0] = 2;
    int k = 0, primo;

    for (long int i = 3; (primos[k]*primos[k]) <= maior; i += 2)
    {
        primo = 1;
        for (int j = 0; (j <= k) && (primo == 1); j++)
        {
            if ((i % primos[j]) == 0)
            {
                primo = 0;
            }
        }
        if (primo == 1)
        {
            primos[k + 1] = i;
            k++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1) printf("composto\n");
        else if (nums[i] == 2) printf("primo\n");
        else
        {
            for (int j = 0; (j <= k) && ((primos[j] * primos[j]) <= nums[i]); j++)
            {
                if ((nums[i] % primos[j]) == 0){
                    check = 0; 
                    break;
                }    
            }
            if (check == 1) printf("primo\n");
            else printf("composto\n");
            check = 1;
        }
        
    }
    

   

    return 0;
}