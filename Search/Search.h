//
// Created by Lispy on 1/27/2020.
//

#ifndef UNTITLED_SEARCH_H
#define UNTITLED_SEARCH_H


class Search {

private:
    bool isValid(int row, int col);
    bool isDestination(int row, int col, Pair dest);

public:
    void ReadFile(*file);
    void search(&array,int initial_pt, int end_pt);
    void Cellsort(&grid);
    void getNextNeighbor();
    void expandNeighbors();

};


#endif //UNTITLED_SEARCH_H
