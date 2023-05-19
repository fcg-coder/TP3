//
//  line_CHILD.hpp
//  ТП3_19
//
//  Created by mak on 19.05.2023.
//

#ifndef line_CHILD_hpp
#define line_CHILD_hpp

#include <stdio.h>
#include "curves_BASE.hpp"
using namespace std;
class LINE: public CURVES{
public:
    void calculate() override;
    LINE(double x1, double k1, double b1);
    LINE();
private:
    // y = kx + b;
    double x,k,b;
};

#endif /* line_CHILD_hpp */
