//
//  Squere.hpp
//  ТП3
//
//  Created by mak on 02.05.2023.
//


//Создать абстрактный базовый класс с виртуальной функцией «Площадь».
#include <fstream>
#include <iostream>
using namespace std;
#pragma once
class SQUERE {
public:
virtual double Square() = 0;
    virtual ~SQUERE();
    //деструктор
    
    
};
