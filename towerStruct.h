//
// Created by Lorenzo on 13/10/2021.
//

#ifndef TOWER_OF_HANOI_TOWERSTRUCT_H
#define TOWER_OF_HANOI_TOWERSTRUCT_H

#define TAILLE_COL 5

int nbOfDisk;

typedef struct{
    int source[TAILLE_COL];
    int aux[TAILLE_COL];
    int dest[TAILLE_COL];
}Tower;

void initTower(int* source, int requiredAmtOfDisk);
int canMove(int diskNb, int* column);
int moveDisk(int diskNb, Tower* pTower, int source, int dest);
int algoHanoi(int diskNb, Tower* pTower, int source, int dest, int aux, int instance);

#endif //TOWER_OF_HANOI_TOWERSTRUCT_H
