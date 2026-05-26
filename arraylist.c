#include "arraylist.h"
#include <stdlib.h>

//just initial values.
void al_init(ArrayList* al){
    al->capacity = 4;
    al->arr = malloc(sizeof(int) * al->capacity);
    al->count = 0; //ALWAYS.
}

//check if element count is at capacity
//if so, double size. realloc the arr.
//go to index of count, which is next index to be given an element
//give it an element and increase count;
void al_add(int x, ArrayList* al){
    if(al->capacity == al->count){
        al->capacity = al->capacity * 2;
        al->arr = realloc(al->arr, (sizeof(int) * al->capacity));
    }

    *(al->arr + (al->count)) = x;
    al->count++;
}

//safeguard improper index, then we just copy everything over one index to the left
//starting at the index given to us. i.e copy over it.
//decrement of count hides the data.
int al_remove_index(int index, ArrayList* al){
    if(index >= al->count || index < 0 || al->count <= 0) return 0;

    for(int i = index; i < al->count - 1; i++){
        *(al->arr + i) = *(al->arr + i + 1);  
    }

    al->count--;
    return 1;
}

//find the index of the first occurance and defer to al_remove_index
int al_remove(int x, ArrayList* al){
    int i = 0;

    while(i < al->count && *(al->arr + i) != x) i++;

    if(i == al->count) return 0;

    return al_remove_index(i, al);
}

int al_get(int i, ArrayList* al, int* out){
    if(al->count <= i || i < 0) return 0;
    *out = *(al->arr + i);
    return 1;
}

void al_free(ArrayList* al){
    free(al->arr);
}