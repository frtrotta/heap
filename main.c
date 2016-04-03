#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main(int argc, char** argv) {

    int z[] = {9,8,7,6,5,-1};
    heap *h = heapInit(4);
    
    for(int i=0; z[i] != -1; i++) {
        heapAdd(h, z[i]);
        printf("\nInserisco %d -> ", z[i]);
        for(int j=1; j <= h->size; j++) {
            printf("%d ", h->k[j]);
        }
        
    }
    printf("\n");
    
    while(!heapIsEmpty(h)) {
        printf("\nRimuovo %d -> ", heapRemoveMin(h));
        for(int j=1; j <= h->size; j++) {
            printf("%d ", h->k[j]);
        }
    }
    
    return (EXIT_SUCCESS);
}

