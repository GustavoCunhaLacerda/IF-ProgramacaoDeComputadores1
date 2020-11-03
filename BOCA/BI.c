#include <stdio.h>
#include <string.h>

int main() {
    char textoPrincipal[1002], textoComparador[1002];
    int i = 0, movimentos = 0, indiceAux = 0;
    if(scanf("%[^\n]s", textoPrincipal)); // ????? https://stackoverflow.com/questions/7271939/warning-ignoring-return-value-of-scanf-declared-with-attribute-warn-unused-r

    while (i < strlen(textoPrincipal))
    {
        int salto = 0;
        for (int a = 0; a < strlen(textoComparador); a++)
        {
            //printf("entrou a\n");
            int b;
            for (b = 0; i + b < strlen(textoPrincipal) && a + b < strlen(textoComparador) && textoPrincipal[i + b] == textoComparador[a + b]; b++){
                printf("%c | %c, %d %d %d\n",textoPrincipal[i + b], textoComparador[a + b], i, a, b);
                //printf("entrou b\n");
            }
            if (salto < b) salto = b;
        }
        printf("%d\n", salto);
        if (salto == 0) {
            textoComparador[indiceAux] = textoPrincipal[i];
            indiceAux++;
            i++;
            // puts(textoComparador);
        }
        else {
            for (int c = i; c < i + salto; c++) {
                //printf("entrou c\n");
                textoComparador[indiceAux] = textoPrincipal[c];
                indiceAux++;
            }
            // puts(textoComparador);
            i += salto;
        }
        //printf("%d\n", indiceAux);
        // puts(textoComparador);
        movimentos++;
    }
    //printf("%d\n", strlen(textoComparador));
    printf("%d\n", movimentos);    



    return 0;
}