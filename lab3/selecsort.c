#include "item.h"

void sort(Item *vet, int lo, int hi){
    int j, swap;
    for(int i=lo;i<hi;i++){
        for(int m=i;m<hi;m++){
            if(vet[m]<swap||m==i){
                j=m;
                swap=vet[m];
            }
        }

        //trocar
        swap=vet[i];
        vet[i]=vet[j];
        vet[j]=swap;
    }
    
}