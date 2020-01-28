//
// Created by Lispy on 1/27/2020.
//

#ifndef UNTITLED_SEARCH_H
#define UNTITLED_SEARCH_H


class Search {

public:
    void ReadFile(*file);
    vector<int> search(&array,int initial_pt, int end_pt);
    void Cellsort();
    void getNextNeighbor();
    void expandNeighbors();

};


#endif //UNTITLED_SEARCH_H
