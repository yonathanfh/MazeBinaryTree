/*
 Text based Maze generation using Binary Tree algorithm

 Written by Yonathan Ferry Hendrawan, March 2015

 This program creates text Maze using Binary Tree algorithm.
 */
#include "Cell.h"


void Cell::setX(int xtemp){
    posX = xtemp;
}

void Cell::setY(int ytemp){
    posY = ytemp;
}

void Cell::setKanan(bool tempKanan){
    kanan = tempKanan;
}

void Cell::setBawah(bool tempBawah){
    bawah = tempBawah;
}
