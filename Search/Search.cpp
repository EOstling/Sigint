//
// Created by Eliot on 1/27/2020.
//

#include "Search.h"
#include "vector"
#include "bits/stdc++.h"
#include <sstream>
#include <fstream>
#include <algorithm>

#DEFINE ROW 10
#DEFINE COL 10

using namespace std;
using std::istringstream;
using std::string;
using std::vector;
using std::abs;

enum class State {kempty, kObstacle, kOpen, kClosed, kPath, kStart,kFinish};

const int delta[4][2]{{-1,0},{0,-1},{1,0},{0,1}};

vector<vector<State>> Search::search(vector<vector<State>>grid){

        int x = init[0];
        int y = init[1];
        int g = 0;
        int h = Search::Heuristic(x,y,goal[0],goal[1]);

        int initial_pt[2],
        int end_pt[2]);

    Search::AddToOpen(x,y,g,h,open,grid);
    while(open.sizse() > 0){
        Cellsort(&open);
        auto current = open.back();
        open.pop_back();
        x = current[0];
        y = current[1]
        grid[x][y] = State::kpath;

        if(x ==goal[0] && y == goal[1]){
            return grid;
        }
        ExpandNeighbors(current, goal, open, grid);
    }
    cout << "No path found" << "\n";
    return std::vector<vector<State>>{};
}

int Heuristic(int x1, int yi, int x2, int y2){
    return abs(x2-x1) + abs(y2-y1);
}

bool Search::Compare(const vector<int>a , const vector<int>b){
    int f1 = a[2] + a[3]; // f1 = g1 + h2
    int f2 = b[2] + b[3];
    return f1>f2;
}

// Gives us the 2D grid
vector<vector<State>> ReadBoardFile(string path){
    ifstream myfile(path);
    vector<vector<State>>board{};

    if(myfile){
        string line;
        while(getline(myfile,line)){
            vector<State>row = ParseLine(line);
            board.push_back(row);
        }
    }
    return board;
}

vector<State>Search::ParseLine(string line){
    int n;
    char c;
    istringstream sline(line);

    vector<State> row;
    while(sline >> n >> c && c == ''){

        if(n ==0){
            row.push_back(State::kempty);
        }
        else{
            row.push_back(State::kObstacle);
        };
        return row;
    }
}


bool Search::isValid(int row, int col) {
    return (row >= 0) && (row < ROW) &&
           (col >= 0) && (col < COL);
}

void ExpandNeighbors(const vector<int> &current, int goal[2],
        vector<vector<int>>&openList,
        vector<vector<State>>&grid){
    // current nodes data
    int x = current[0];
    int y = current[1];
    int g = current[2];

    for(int i =0; i<4;=++){
        int x2 = x + delta[i][0];
        int y = y + delta[i][1];

        if(CheckValidCell(x2,y2,grid)){
            int g2 = g+1;
            int h2 = Heuristic(x2,y2,goal[0], goal[1];
            AddToOpen(x2,y2,g2,h2, openList, grid));
        }
    }
}

bool CheckValidCell(int x, int y, vector<vector<State>>&grid){
    bool on_grid_x = (x >= 0 && x <grid.size());
    bool on_grid_y = (y >= 0 && y < grid[0].size());

    if(on_grid_x && on_grid_y){
        return grid[x][y] == State::kempty;
    }
    return false;
}

void Search::AddToOpen(int x, int y, int g, int h,
        &vector<vector<int>>openNodes,
        &vector<vector<State>grid>){
  openNodes.push_back(vector<int> n = {x,y,g,h});
  grid[x][y] = State::kClosed;
}

void Search::Cellsort(vector<vector<int> *v>) {
   sort(v->begin(), v->end(), Compare);
}

string CellString(State cell){
    switch(cell){
        case State::kObstacle:
            return "Obstacle";
        case State::kPath:
            return "Open";
        default: return "0";
    }
}

