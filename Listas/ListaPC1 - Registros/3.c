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

// tipo poligono
typedef struct Poligono {
    int lados;
    ponto *pontos;
} poly;

// prototipos
// io
void scan_poly(poly *poligono);
void print_pontos_poly(poly poligono);

// operacoes
double calc_perimetro(poly poligono);
double calc_area(poly poligono);
int qte_triangulos(poly poligono);

// funcoes auxiliares
bool forma_triangulo(ponto a, ponto b, ponto c);

int main() {
    poly p1;

    scanf("%d", &p1.lados);
    
    scan_poly(&p1);
    print_pontos_poly(p1);
    printf("Perimetro = %.2lf\n", calc_perimetro(p1));
    printf("Area = %.2lf\n", calc_area(p1));
    printf("Qquantidade de Triangulos Dentro do Poligono = %d\n", qte_triangulos(p1));
    
    return 0;
}

// implementacoes 
void print_pontos_poly(poly poligono) {
    for (int i = 0; i < poligono.lados; i++)
        printf("P%d = ( %.1lf , %.1lf )\n", i, poligono.pontos[i].x, poligono.pontos[i].y);
}

void scan_poly(poly *poligono) {
    int lados = poligono->lados;
    poligono->pontos = malloc(lados*sizeof(ponto));
    for (int i = 0; i < lados; i++) {
        scanf("%lf %lf", &(poligono->pontos[i].x), &(poligono->pontos[i].y));
        getchar();
    }
}

double calc_perimetro(poly poligono) {
    double perimetro = 0;
    int lados = poligono.lados;
    for (int i = 0; i < lados-1; i++)
        perimetro += sqrt( pow(poligono.pontos[i].x - poligono.pontos[i+1].x, 2) + pow(poligono.pontos[i].y - poligono.pontos[i+1].y, 2));
    perimetro += sqrt( pow(poligono.pontos[lados-1].x - poligono.pontos[0].x, 2) + pow(poligono.pontos[lados-1].y - poligono.pontos[0].y, 2));
    return perimetro;
}

double calc_area(poly poligono) {
    double area = 0;
    int lados = poligono.lados;
    for (int i = 0; i < lados-1; i++) 
        area += (poligono.pontos[i].x*poligono.pontos[i+1].y) - (poligono.pontos[i+1].x*poligono.pontos[i].y);
    area += (poligono.pontos[lados-1].x*poligono.pontos[0].y) - (poligono.pontos[0].x*poligono.pontos[lados-1].y);
    return fabs(area)/2;
}

bool forma_triangulo(ponto a, ponto b, ponto c) {
    double det = a.x*b.y + b.x*c.y + a.y*c.x - b.y*c.x - a.y*b.x - a.x*c.y;
    if ( det == 0 )
        return false;
    return true;
}

int qte_triangulos(poly poligono) {
    int qte_tri = 0;
    int lados = poligono.lados;
    for (int i = 0; i < lados; i++) {
        for (int j = 0; j < lados; j++) {
            for (int k = 0; k < lados; k++)
                if(forma_triangulo(poligono.pontos[i], poligono.pontos[j], poligono.pontos[k]) == true) qte_tri++;
        }
    }
    return qte_tri/6;
}
