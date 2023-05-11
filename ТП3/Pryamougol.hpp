//
//  Pryamougol.hpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#ifndef Pryamougol_hpp
#define Pryamougol_hpp

#include <iostream>

#include "Squere.hpp"
#endif /* Pryamougol_hpp */


//Создать производные классы «Прямоугольник», «Круг», «Прямоугольный треугольник», «Трапеция» со своими функциямиплощади и переменными.



class PRYAMOUGOL: public SQUERE{
    
public:
    //Конструкторы
    PRYAMOUGOL(int n);
    PRYAMOUGOL();
    PRYAMOUGOL(double x, double y);
    double Square() override; //Площадь
    
private:
    
    double X, Y; // Ширина и длина прямоугольника
   
    
};
