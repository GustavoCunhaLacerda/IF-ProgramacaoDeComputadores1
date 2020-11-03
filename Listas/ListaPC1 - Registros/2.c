#include <stdio.h>
#include <stdlib.h>

// tipo numero imaginario/complexo
typedef struct imaginary_numer {
    float p_int; // parte inteira
    float p_ima; // parte imaginaria/complexa
} inum;

// prototipos das funcoes
// io
void print_inum(inum num);
void scan_inum(inum *num);
// operacoes
inum soma_inum(inum a, inum b); // soma
inum mult_inum(inum a, inum b); // multiplicacao
inum sub_inum(inum a, inum b);  // subtracao
inum div_inum(inum a, inum b);  // divisao

int main() {
    inum n1, n2, n3;
    scan_inum(&n1);
    scan_inum(&n2);

    n3 = soma_inum(n1, n2);
    print_inum(n3);

    n3 = sub_inum(n1, n2);
    print_inum(n3);

    n3 = mult_inum(n1, n2);
    print_inum(n3);

    n3 = div_inum(n1, n2);
    print_inum(n3);

    return 0;
}

// implementacoes
void print_inum(inum num) {
    if (num.p_ima >= 0)
        printf("%.1f+%.1fi\n", num.p_int, num.p_ima);
    else
        printf("%.1f%.1fi\n", num.p_int, num.p_ima);
}

void scan_inum(inum *num) {
    scanf("%f%fi", &num->p_int, &num->p_ima);
    getchar();
}

inum soma_inum(inum a, inum b) {
    inum c;
    c.p_int = a.p_int+b.p_int;
    c.p_ima = a.p_ima+b.p_ima;

    return c;
}

inum sub_inum(inum a, inum b) {
    inum c;
    c.p_int = a.p_int-b.p_int;
    c.p_ima = a.p_ima-b.p_ima;

    return c;
}

inum mult_inum(inum a, inum b) {
    inum c;
    c.p_int = (a.p_int*b.p_int) - (a.p_ima*b.p_ima);
    c.p_ima = (a.p_int*b.p_ima) + (a.p_ima*b.p_int);

    return c;
}

inum div_inum(inum a, inum b) {
    inum c;
    int div = (b.p_ima*b.p_ima) + (b.p_int*b.p_int);
    b.p_ima *= -1;
    c = mult_inum(a, b);

    c.p_int /= div;
    c.p_ima /= div;

    return c;
}

