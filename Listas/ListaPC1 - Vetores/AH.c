#include <stdio.h>
void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}

int main() {
    int n, seq[1000], num, qte = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &seq[i]);
    }
    quick_sort(seq, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        if (seq[i] == seq[i+1])
        {
            qte++;
        }
        else
        {
            printf("%d %d", seq[i], qte);
            qte = 1;
        }
        printf("\n");
        
    }
    
    

    return 0;
}