#ifndef BHEAP_H
#define BHEAP_H
#define TIPO int

TIPO* CriarBHeap();

TIPO RetirarElemento(TIPO* vet);

void AddElemento(TIPO* vet);

void FixUp(TIPO* vet);

void FixDown(TIPO* vet);

#endif