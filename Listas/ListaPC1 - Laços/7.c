#include <stdio.h>
#define true 1
#define false 0

int main(){
    long int num, primo = true, di = 3;
    scanf("%ld", &num);
    if ((num != 2) && (num % 2 == 0)) {
        primo = false;
    }
    while( (di*di <= num) && (primo == true) ){
        if(num%di == 0 ){
            primo = 0;
            break;
        }
        di+=2;
    }
    if(primo == true && num != 1){
        printf("Primo!\n");
    }
    else{
        printf("Composto!\n");

    }
}