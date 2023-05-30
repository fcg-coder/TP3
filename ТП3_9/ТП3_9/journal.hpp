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

class journal: public AbstracktCLASS{
    
public:
    //Конструкторы
    journal(string N, int Y, string NI, int C, string A);
    void print() override; //Площадь
    
//    string name;
//    int year;
//    string nameOfIzdat;
//    int countStr;
//    string anotation;
};
