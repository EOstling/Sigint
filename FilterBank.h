//
// Created by Lispy on 1/25/2020.
//

#ifndef UNTITLED_FILTERBANK_H
#define UNTITLED_FILTERBANK_H


#include <string>
using namespace std;

class FilterBank{

private:
    int calculate(int *valArray);
    long long mapMultiFB(char *s,int size, string *polyPhaseMetric);

public:
    void setCalcuate(int *val);

};

#endif //UNTITLED_FILTERBANK_H
