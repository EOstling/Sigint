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

    vector<vector<T>>ReadBoardFile(string filePath);

    bool isValid(int row, int col);

    void ExpandNeighbors(const vector<int> &current, int goal[2],
            vector<vector<int>>&open,
            vector<vector<T>>&grid);

    bool CheckValidCell(int x, int y, vector<vector<T>>&grid);

    void AddToOpen(int x, int y, int g, int h,
            &vector<vector<int>>openNodes,
            &vector<vector<State>grid>));

    void CellSort(vector<vector<int>>*grid);
};


#endif //UNTITLED_SEARCH_H
