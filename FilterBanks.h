//
// Created by Lispy on 1/26/2020.
//

#ifndef UNTITLED_FILTERBANKS_H
#define UNTITLED_FILTERBANKS_H

#include <string>

class FilterBanks {

private:
    int calculate(int *valArray);

    long long mapMultiFB(char *s, int size, double *polyPhaseMetric);

public:
    void setCalcuate(int *val);

};

#endif