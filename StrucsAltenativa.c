#include<stdio.h>
#define MAXVECH as 600

typedef struct{
    int hora, min;
}Tiempo;

typedef struct{
    int code, express, prior; // codigo de identificacion / Se monta en un Ferry express o no [0 o 1] / prrioritario [0 o 1] 
    Tiempo horLleg; // / Hora de llegada
    char id[8]; // Mstricula del vehiculo;
    int pasaj[2], pasajMayor[2]; // Pasajeros (Cantidad, Si son VIP o ejecutivos [0 o 1]) / Pasajeros mayores a 60 (Cantidad, Si son VIP o ejecutivos [0 o 1])
    float peso;
}Vehiculo;

typedef struct{
    char nomb[50];
    int maxVehic, maxPasEjec, maxPasVIP; //maximas capacidades: Vehiculos, Pasajeros ejecutivos, Pasajeros VIP
    float cargaMax;
    Tiempo tiempViaje;
    int express, numId, estado; // Es un Ferry express o no [0 o 1] / numero con el que se identifica / 1: en carga, 2: en viaje, 3: en espera para cargar
    Vehiculo vehiculos[MAXVECH];
}Ferry;