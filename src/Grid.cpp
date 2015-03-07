/*
 Text based Maze generation using Binary Tree algorithm

 Written by Yonathan Ferry Hendrawan, March 2015

 This program creates text Maze using Binary Tree algorithm.
 */
#include "Grid.h"
#include <iostream>
#include <stdlib.h>     // srand, rand
#include <time.h>


void Grid::init(){
    for(int i = 0; i < size*2+1; i++)
        for(int j = 0; j < size*2+1; j++){
			Cell a;
            myCells.push_back(a);
        }
}

void Grid::printGrid(){
	std::cout << std::endl;
	for(int i = 0; i < (size*2+1); i++){  //i: baris, j: kolom
	    for(int j = 0; j < (size*2+1); j++){
            if(i == 0 || i == size*2) {
                std::cout << "x";   //baris pertama dan terakhir; dinding atas dan bawah
            }
            else{
                if(j == 0 || j == size*2) {
                    std::cout << "x";   //kolom pertama dan terakhir; dinding kiri dan kanan
                }
                else{
                    if(i%2==1){ //baris berisi kombinasi cell dan dinding
                        if (j%2==1) std::cout << " ";   //cell selalu kosong
                        else{
                            if(myCells[i * (size*2+1) + j-1].getKanan()) std::cout << "x";
                            else std::cout << " ";
                        }
                    }
                    else{   //baris berisi dinding
                        if(j%2==0) std::cout << "x";
                        else{
                            if(myCells[(i-1) * (size*2+1) + j].getBawah()) std::cout << "x";
                            else std::cout << " ";
                        }
                    }
                }
            }
        }
        std::cout << std::endl;
	}
}

void Grid::generateMaze(){
    srand (time(NULL)); // initialize random seed:
    for(int i = 1; i < (size*2+1); i+=2){ //i: baris, j: kolom
	    for(int j = 1; j < (size*2+1); j+=2){
            int randomPath = rand() % 2;    // generate a number between 0 and 1:
            //std::cout << randomPath << " ";
            if(randomPath == 0) {   // jalur bawah saja
                myCells[i * (size*2+1) + j].setBawah(false);
            }
            else {   // jalur kanan saja
                myCells[i * (size*2+1) + j].setKanan(false);
            }
	    }
	    //std::cout << std::endl;
    }

    // kolom terakhir dan baris terakhir harus di-remove semua dindingnya
    for(int i = 1; i < (size*2+1); i+=2){ //i: baris, j: kolom
	    for(int j = 1; j < (size*2+1); j+=2){
            if(i==size*2-1) myCells[i * (size*2+1) + j].setKanan(false);
            if(j==size*2-1) myCells[i * (size*2+1) + j].setBawah(false);
	    }
    }
}
