#include<stdio.h>

typedef struct{
    int prior;
    float peso;
}Sujeto;

void Entrada(Sujeto suj*);

int main() {
    Sujeto sujetos[100], entrante, sacados[100];
    int pesMax, pesAct, seguir, i, n, j, m;

    seguir = 1;
    pesMax = 1000;
    pesAct = 0;
    i = 0;
    n = 10;
    j = 0;
    m = 0;

    do{
        Entrada(entrante);

        if((i < n) && (pesAct < pesMax)){
            sujetos[i].prior = entrante.prior;
            sujetos[i].peso = entrante.peso;
        }else{
            if(entrante.prior == 1){

            }
        }

        i++;
    }while(seguir != 0);

}

void Entrada(Sujeto suj*){
    printf("Peso: ");
    scanf("%f", &suj->peso);
    printf("Prioritario?: ");
    scanf("%i", &suj->prior);
}

void Reemplazo(Sujeto dentro[], Sujeto suj, int n, Sujeto fuera[], int *m, float *pesoAct){

    int i, j, l, remp, v[n];
    float pesoLib;

    pesoLib = 0;
    j = 0;
    l = 0;
    remp = 0;
    for(i = 0, i < n, i++){
        v[i].prior = 0;
        v[i].peso = 0;
    }
    i = 0;

    while((i < n) && (remp == 0)){
        if(dentro[i]->prior == 0){
            if(dentro[i]->peso >= suj.peso){
                if(m >= 2){
                    for(j = m, j > 0, j--){
                        fuera[j]->prior = 0;
                        fuera[j]->peso = fuera[j--]->peso
                    }
                }

                fuera[0]->prior = 0;
                fuera[0]->peso = dentro[i]->peso;
                pesAct -= dentro[i]->peso;
                m++;
                dentro[i]->prior = suj.prior;
                dentro[i]->peso = suj.peso;
                remp++;
            }else{
                v[l] = i;
                pesoLib += dentro[i]->peso;
                i++;
            }
        }else{
            i++;
        }
    }

    if((remp == 0) && (pesoLib >= suj.peso)){
        
    }
}