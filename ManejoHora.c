#include<stdio.h>

int SumaHora(int hora, int suma);

int main(){
    int hora, y;

    printf("Hora: ");
    scanf("%i", &hora);

    printf("Suma: ");
    scanf("%i", &y);

    printf("%i\n", SumaHora(hora, y));
    return 0;
}

int SumaHora(int hora, int sum){
    int aux, res;

    res = hora + sum;
    aux = res % 100;

    if(aux >= 59){
        res = (res + 100) - 59;
    }
    aux = res % 100;
    if(res > 2359){
        res = aux;
    }

    return res;
}