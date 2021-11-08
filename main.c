#include <stdio.h>
#include "towerStruct.h"
#include "affichage.h"

int main() {
    int source[TAILLE_COL]={0};
    int aux[TAILLE_COL]={0};
    int dest[TAILLE_COL]={0};
    Tower myTower = {0};
    printf("Welcome to Towers of Hanoi, how many disks do you want ?\n>");
    scanf("%d", &nbOfDisk);
    initTower(myTower.source, nbOfDisk);
    affBaseTowers(&myTower);
    algoHanoi(nbOfDisk, &myTower, 1, 3, 2, 0);
    affBaseTowers(&myTower);

    return 0;

}
