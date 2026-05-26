#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int* arr;
    int capacity;
    int count;
}ArrayList;

void al_init(ArrayList* al);

void al_add(int x, ArrayList* al);

int al_remove_index(int i, ArrayList* al);

int al_remove(int x, ArrayList* al);

int al_get(int i, ArrayList* al, int* out);

void al_free(ArrayList* al);