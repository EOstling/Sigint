//
// Created by Eliot on 1/27/2020.
//

#include "Search.h"
#include "vector"
#include "bits/stdc++.h"
#include <sstream>
#include <fstream>

#DEFINE ROW 10
#DEFINE COL 10

using namespace std;
using std::istringstream;
using std::string;
using std::vector;
using std::abs;

enum class State {kempty, kObstacle, kOpen, kClosed};

vector<vector<State>> Search::search(vector<vector<State>>grid){

        int x = init[0];
        int y = init[1];
        int g = 0;
        int h = Search::Heuristic(x,y,goal[0],goal[1]);

        int initial_pt[2],
        int end_pt[2]);

    cout << "No path found" << "\n";
    return std::vector<vector<State>>{};
}

int Heuristic(int x1, int yi, int x2, int y2){
    return abs(x2-x1) + abs(y2-y1);
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

void Search::AddToOpen(int x, int y, int g, int h,
        &vector<vector<int>>openNodes,
        &vector<vector<State>grid>){
  openNodes.push_back(vector<int> n = {x,y,g,h});
  grid[x][y] = State::kClosed;
}

void Search::Cellsort(&grid) {
    for(int i: grid){
        //
    }
}

