#include <stdio.h>

typedef struct{
    int* arr;
    int capacity;
    int count;
}ArrayList;

void al_init(ArrayList* al);

void al_add(int x, ArrayList* al);

void al_remove(int x, ArrayList* al);

void al_get(int i, ArrayList al);

void al_free(ArrayList* al);