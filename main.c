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

    //print 123

    al_remove_index(2, &al);

    //remove 3

    for(int i = 0; i < al.count; i++){
        al_get(i, &al, &x);
        printf("%d", x);
    }

    //print 12

    printf("\n");

    int size = al_getSize(&al);
    printf("Size is %d\n", size);


    return 0;
}