//
//  utility.cpp
//

#include "utility.h"

double util::C2F(double TC)
{
    double TF = 9*TC/5 + 32;
    return TF;
}

double util::F2C(double TF)
{
    double TC = 5*(TF-32)/9;
    return TC;
}
