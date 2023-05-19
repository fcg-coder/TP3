//
//  Hyperbole_CHILD.hpp
//  ТП3_19
//
//  Created by mak on 19.05.2023.
//

#ifndef Hyperbole_CHILD_hpp
#define Hyperbole_CHILD_hpp

#include <stdio.h>
#include "curves_BASE.hpp"
using namespace std;
class hyperbole: public CURVES{
public:
    void calculate() override;
    hyperbole(double x1, double k1, double b1);
    hyperbole();
private:
    // y = kx^2 + b;
    double x,k,b;
};


#endif /* Hyperbole_CHILD_hpp */
