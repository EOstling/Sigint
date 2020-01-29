//
// Created by Lispy on 1/27/2020.
//

#include "Search.h"
#include "vector"
#include "bits/stdc++.h"

#DEFINE ROW 10
#DEFINE COL 10

using namespace std;



void Search::search(int &array, int initial_pt, int end_pt) {


}


bool Search::isValid(int row, int col) {
    return (row >= 0) && (row < ROW) &&
           (col >= 0) && (col < COL);
}

