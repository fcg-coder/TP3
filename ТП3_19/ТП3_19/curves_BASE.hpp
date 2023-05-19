//
//  curves.hpp
//  ТП3_19
//
//  Created by mak on 19.05.2023.
//

#ifndef curves_hpp
#define curves_hpp

#include <iostream>


//Создать абстрактный класс «Кривые» для вычисления координаты y для
//некоторой x.
class CURVES {
public:
virtual void calculate() = 0;//Класс абстрактный благодаря наличию ЧИСТОЙ виртуальной функции

    virtual ~CURVES();
    //деструктор
    
    
};

#endif /* curves_hpp */
