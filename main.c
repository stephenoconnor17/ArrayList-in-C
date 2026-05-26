#include "arraylist.h"
#include <stdio.h>

int main(){

    ArrayList al;
    al_init(&al);
    al_add(1,&al);
    al_add(2,&al);
    al_add(3,&al);

    int x = 0;
    for(int i = 0; i < al.count; i++){
        al_get(i, &al, &x);
        printf("%d", x);
    }

    al_remove_index(2, &al);

    for(int i = 0; i < al.count; i++){
        al_get(i, &al, &x);
        printf("%d", x);
    }

    printf("\n");

    return 0;
}