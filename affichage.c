//
// Created by Lorenzo on 13/10/2021.
//

#include "affichage.h"
#include <stdio.h>

void affBaseTowers(Tower* pTower){
    for (int i=TAILLE_COL-1; i>=0; --i){
        printf("%d\t%d\t%d\n", pTower->source[i], pTower->aux[i], pTower->dest[i]);
    }
    printf("\n\n\n");

}