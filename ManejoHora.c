#include<stdio.h>

typedef struct{
    int hora, min;
}Tiempo;

Tiempo ConvHoraCivil(int hora);
void ActualizarTiempo(Tiempo *actulizar, Tiempo sumar);
int ConvHoraMili(Tiempo hora);

int main(){
    int x, y;
    Tiempo hor1, hor2;

    printf("Hora: ");
    scanf("%i", &x);

    hor1 = ConvHoraCivil(x);

    printf("Suma: ");
    scanf("%i", &y);

    hor2 = ConvHoraCivil(y);

    ActualizarTiempo(&hor1, hor2);

    printf("%i:%i\n", hor1.hora, hor1.min);

    x = ConvHoraMili(hor1);

    return 0;
}

Tiempo ConvHoraCivil(int hora){
    Tiempo res;
    res.min = hora % 100;
    res.hora = hora / 100;

    if(res.min > 59){
        res.hora += 1;
        res.min -= 60;
    }

    printf("%i:%i\n", res.hora, res.min);

    return res;
}

void ActualizarTiempo(Tiempo *actulizar,  Tiempo sumar){
    int totalMin;
    totalMin = (actulizar->hora * 60) + actulizar->min  + (sumar.hora * 60) + sumar.min;
    
    if(totalMin > 1439){
        totalMin -= 1440;
    }

    actulizar->hora = (totalMin / 60) % 24;
    actulizar->min  = totalMin % 60;
}

int ConvHoraMili(Tiempo hora){
    int res;

    res = hora.hora * 100;
    res += hora.min;

    printf("%i\n", res);

    return res;
}