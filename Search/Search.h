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
    vector<vector<State>> Search();
    int Heuristic(int x1, int y1,
            int x2, int y2);
    bool Compare(const vector<int> a,
            const vector<int> b);


};


#endif //UNTITLED_SEARCH_H
