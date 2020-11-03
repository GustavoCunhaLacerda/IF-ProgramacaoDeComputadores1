#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// macros 
#define showi(x) printf("%s -> %d\n", #x, x);
#define showf(x) printf("%s -> %f\n", #x, x);
#define shows(x) printf("%s -> %s\n", #x, x);
#define showd(x) printf("%s -> %lf\n", #x, x);
// typedefs
typedef unsigned int uint;
typedef long int lint;
typedef long long int llint;
typedef unsigned long long int ulli;
// bool simulation
typedef int bool;
#define true 1
#define false 0

char* get_line(void){
    char *string = malloc(sizeof(char));
    int i = 1;
    while (true)
    {
        string[i-1] = getchar();
        if (string[i-1] == '\n')
            break;
        i++;
        string = realloc(string, (i+1)*sizeof(char)); 
    }
    return string;
}

int main(void){
    char *texto;
    texto = get_line();
    // shows(texto);
    free(texto);
    return 0;
}