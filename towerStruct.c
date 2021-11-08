//
// Created by Lorenzo on 13/10/2021.
//

#include "towerStruct.h"
#include <stdio.h>
#include "affichage.h"

void initTower(int* source, int requiredAmtOfDisk){
    for (int i = 1; i<=requiredAmtOfDisk; i++){
        source[i-1]=requiredAmtOfDisk-i+1;
    }
    return;
}

int canMove(int diskNb, int* column){
    for (int i = 0; i < TAILLE_COL; ++i) {
        if (column[i]==diskNb){
            if (column[i+1]==0){
                return 1;
            } else {
                return 0;
            }
        }
    }
    return -1;
}

int moveDisk(int diskNb, Tower* pTower, int source, int dest){
    int j = 0;
    int* pSource;
    int* pDest;
    switch (source) {
        case 1 :
            pSource = (pTower -> source);
            break;
        case 2 :
            pSource = (pTower -> aux);
            break;
        case 3 :
            pSource = (pTower -> dest);

    }
    switch (dest) {
        case 1 :
            pDest = (pTower -> source);
            break;
        case 2 :
            pDest = (pTower -> aux);
            break;
        case 3 :
            pDest = (pTower -> dest);
            break;
    }

    for (int i = 0; i < TAILLE_COL; ++i) {
        if (pSource[i]==diskNb){
            pSource[i]=0;
            for (j = 0; j < TAILLE_COL; ++j){
                if (pDest[j] == 0){
                    pDest[j]=diskNb;
                    return 1;
                }
            }
        }
    }
    return -1;
}
//Ajout d'un comentaire
int algoHanoi(int diskNb, Tower* pTower, int source, int dest, int aux, int instance){
    printf("Init Algo %d disk %d from %d to %d\n", instance, diskNb, source, dest);
    if (diskNb == 1){
        printf("Algo %d : Disk one from %d to %d\n", instance, source, dest);
        printf("%d\n", moveDisk(diskNb, pTower, source, dest));
        affBaseTowers(pTower);
    } else {
        algoHanoi(diskNb - 1, pTower, source, aux, dest, instance+1);
        printf("Algo %d : Disk %d from %d to %d\n", instance, diskNb, source, dest);
        printf("%d\n", moveDisk(diskNb, pTower, source, dest));
        affBaseTowers(pTower);
        algoHanoi(diskNb - 1, pTower, aux, dest, source, instance+1);
    }
}
