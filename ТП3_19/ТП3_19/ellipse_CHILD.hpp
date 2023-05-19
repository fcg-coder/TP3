//
//  ellipse_CHILD.hpp
//  ТП3_19
//
//  Created by mak on 19.05.2023.
//

#ifndef ellipse_CHILD_hpp
#define ellipse_CHILD_hpp

#include <stdio.h>
#include "curves_BASE.hpp"
using namespace std;
class ellipse: public CURVES{
public:
    void calculate() override;
    ellipse(double x1, double a1, double b1);
    ellipse();
private:
    // y = kx + b;
    double x,a,b;
};


#endif /* ellipse_CHILD_hpp */


