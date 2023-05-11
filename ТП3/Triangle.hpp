//
//  Triangle.hpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>

#include "Squere.hpp"
#endif /* Triangle_hpp */


//Создать производные классы «Прямоугольник», «Круг», «Прямоугольный треугольник», «Трапеция» со своими функциямиплощади и переменными.

class TRIANGLE: public SQUERE{
    
public:
    TRIANGLE(int n);
    TRIANGLE();
    TRIANGLE(double K1, double K2);
    double Square() override; //
private:
    double Katet1, Katet2;
    
};
