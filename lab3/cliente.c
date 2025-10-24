#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "item.h"

extern void sort(Item *vet, int lo, int hi);
void lerItem(Item* vet, int lo, int hi);
void imprimirItem(Item* vet, int lo, int hi);
void liberarItem(Item* vet, int lo, int hi);

int main(int argc, char* argv[]){
    //alocar vetor dinamico
    Item* vet = malloc(sizeof(Item)*atoi(argv[1]));

    //ler os n itens (inteiros) de stdin
    lerItem(vet, 0, atoi(argv[1]));

    //setar variaveis de tempo
    clock_t start = clock();

    //algoritmo de sort
    sort(vet, 0, atoi(argv[1]));

    //finalizar tempo
    clock_t end = clock();
    double seconds=((double)end-start)/CLOCKS_PER_SEC;
    printf("%lf\n", seconds);

    //imprimir vetor
    imprimirItem(vet, 0, atoi(argv[1]));

    //liberar memoria
    liberarItem(vet, 0, atoi(argv[1]));

    return 0;
}

void lerItem(Item* vet, int lo, int hi){
    for(int i=lo;i<hi;i++){
        scanf(" %d", &vet[i]);
    }
}

void imprimirItem(Item* vet, int lo, int hi){
    for(int i=lo;i<hi;i++){
        printf(" %d", vet[i]);
    }
    printf("\n");
}
void liberarItem(Item* vet, int lo, int hi){
    for(int i=lo;i<hi;i++){
        //free(vet[i]);
    }
    free(vet);
}