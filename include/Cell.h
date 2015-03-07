/*
 Text based Maze generation using Binary Tree algorithm

 Written by Yonathan Ferry Hendrawan March 2015

 This program creates text Maze using Binary Tree algorithm.
 */
#ifndef CELL_H
#define CELL_H


class Cell
{
    public:
        Cell(){posX = 0; posY = 0; kanan = true; bawah = true;};
        int getX(){return posX;};
        int getY(){return posY;};
        void setX(int);
        void setY(int);
        bool getKanan(){return kanan;};
        bool getBawah(){return bawah;};
        void setKanan(bool);
        void setBawah(bool);
    protected:
    private:
        int posX;
        int posY;
        bool kanan;
        bool bawah;
};

#endif // CELL_H
