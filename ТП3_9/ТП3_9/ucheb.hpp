//
//  Pryamougol.hpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#ifndef Pryamougol_hpp
#define Pryamougol_hpp

#include <iostream>
#include <string>

#include "abst.hpp"
#endif /* Pryamougol_hpp */


//Определить наследников: журнал, учебник,
//книга. Для каждого наследника переопределить вывод на экран.

class ucheb: public AbstracktCLASS{
    
public:
    //Конструкторы
    ucheb(string N, int Y, string NI, int C, string A);
    ucheb();
    void print() override; //Площадь
    
//    string name;
//    int year;
//    string nameOfIzdat;
//    int countStr;
//    string anotation;
};
