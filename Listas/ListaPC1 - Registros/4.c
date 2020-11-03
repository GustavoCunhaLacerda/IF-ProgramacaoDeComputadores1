#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// tipo bool 
typedef enum Bool {
    true = 1, false = 0
} bool;

// tipo ponto
typedef struct Ponto {
    double x;
    double y;
} ponto;

// tipo retangulo 
typedef struct Retangulo{
    ponto p1; // ponto superior esquerdo
    ponto p2; // ponto superior direito
} rect;

// prototipos
// operacoes
double area_rect(rect retangulo);
double area_entre_rect(rect r1, rect r2);
bool esta_contido(rect r1, rect r2);
bool ha_intersecao(rect r1, rect r2);

// aux
ponto ponto_de_intersecao(rect r1, rect r2);

int main() {
    rect r1, r2;
    scanf("%lf %lf", &r1.p1.x, &r1.p1.y);
    scanf("%lf %lf", &r1.p2.x, &r1.p2.y);

    scanf("%lf %lf", &r2.p1.x, &r2.p1.y);
    scanf("%lf %lf", &r2.p2.x, &r2.p2.y);
    
    printf("Area de r1 = %.2lf\n", area_rect(r1));
    printf("Area de r2 = %.2lf\n", area_rect(r2));

    if (esta_contido(r1, r2) == true) printf("r1 esta contido em r2\n");
    else printf("r1 NAO esta contido em r2\n");

    printf("Area entre r1 e r2 = %lf\n", area_entre_rect(r1, r2));
    

    return 0;
}

// implementacoes
double area_rect(rect retangulo) {
    return fabs((retangulo.p1.x - retangulo.p2.x) * (retangulo.p1.y - retangulo.p2.y));
}

bool esta_contido(rect r1, rect r2) {
    // verifica se r1 esta contido em r2
    if ((r1.p1.x > r2.p1.x) && (r1.p1.y < r2.p1.y))     // comparacao do ponto superior esquerdo
        if ((r1.p2.x < r2.p2.x) && (r1.p2.y > r2.p2.y)) // comparacao do ponto inferior direito
            return true;
    return false;
}

bool ha_intersecao(rect r1, rect r2) {
    // verifica ha intersecao entre r1 e r2
    if ((r1.p1.x > r2.p1.x) && (r1.p1.y < r2.p1.y))     // comparacao do ponto superior esquerdo
        if ((r1.p1.x < r2.p2.x) && (r1.p1.y > r2.p2.y))
            return true;
    
    if ((r1.p2.x < r2.p2.x) && (r1.p2.y > r2.p2.y))     // comparacao do ponto inferior direito
        if ((r1.p2.x > r2.p1.x) && (r1.p2.y < r2.p1.y))
            return true;
    return false;
}

ponto ponto_de_intersecao(rect r1, rect r2) {
    // verifica ha intersecao entre r1 e r2
    if ((r1.p1.x > r2.p1.x) && (r1.p1.y < r2.p1.y))     // comparacao do ponto superior esquerdo
        if ((r1.p1.x < r2.p2.x) && (r1.p1.y > r2.p2.y))
            return r1.p1;
    
    if ((r1.p2.x < r2.p2.x) && (r1.p2.y > r2.p2.y))     // comparacao do ponto inferior direito
        if ((r1.p2.x > r2.p1.x) && (r1.p2.y < r2.p1.y))
            return r1.p2;

    printf("Erro! Nao ha intersecao\n");
}

double area_entre_rect(rect r1, rect r2) {
    rect r;
    r.p1 = ponto_de_intersecao(r1, r2); 
    r.p2 = ponto_de_intersecao(r2, r1); 

    return area_rect(r);
}