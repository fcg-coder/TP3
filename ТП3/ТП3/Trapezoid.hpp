//
//  Trapezoid.hpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#ifndef Trapezoid_hpp
#define Trapezoid_hpp

#include <stdio.h>

#include "Squere.hpp"
#endif /* Trapezoid_hpp */

//Создать производные классы «Прямоугольник», «Круг», «Прямоугольный треугольник», «Трапеция» со своими функциямиплощади и переменными.

class TRAPEZOID: public SQUERE{
    
public:
    TRAPEZOID(int n);
    TRAPEZOID();
    TRAPEZOID(double s1, double s2, double h);
    
    double Square() override; //
private:
    
    double S1, S2,H;
    
    
};
