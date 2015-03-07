/*
 Text based Maze generation using Binary Tree algorithm

 Written by Yonathan Ferry Hendrawan March 2015

 This program creates text Maze using Binary Tree algorithm.
 */
#ifndef GRID_H
#define GRID_H

#include "Cell.h"
#include <vector>

class Grid
{
    public:
        Grid(){size = 10;};
        //Grid(int tempSize){size = tempSize; myCell[size * size];};
        int getSize() { return size; }
        void setSize(int val) { size = val; }
        Cell getCell(int, int);
        void init();
        void printGrid();
        void generateMaze();
    protected:
    private:
        int size;
        std::vector<Cell> myCells;
};

#endif // GRID_H
