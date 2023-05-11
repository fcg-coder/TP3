//
//  Circle.hpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>

#include "Squere.hpp"
#endif /* Circle_hpp */


//Создать производные классы «Прямоугольник», «Круг», «Прямоугольный треугольник», «Трапеция» со своими функциямиплощади и переменными.

class CIRCLE: public SQUERE{
    
public:
    
    CIRCLE();
    CIRCLE(int n);
    CIRCLE(double r);
    double Square() override; //
private:
    
    double R;
    double pi;
    
    
};
