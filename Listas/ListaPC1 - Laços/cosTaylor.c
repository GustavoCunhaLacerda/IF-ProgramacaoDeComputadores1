#include <stdio.h>

int fatorial(int x){
    if (x == 0) {
        return 1;
    }
    else {
        return x*(fatorial(x-1));
    }
}

float potencia (float x, int y){
    float aux = x;
    for( y; y > 1; y--)
    {
        x = x*aux;
    }    
    return x;
}

int main(){
    int denominador = 3, denominador_aux, pot=3;
    float nominador, x, cos;
    scanf("%f", &x);
    cos = x;
    for (int n = 1; n < 10; n++) {
        // Serie de Taylor para cos:
        cos += (potencia(-1, n)/(fatorial(2*n)))*potencia(x, 2*n);
    }
    printf("%f\n", cos);
}