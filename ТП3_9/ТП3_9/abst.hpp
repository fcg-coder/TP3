//
//  Squere.hpp
//  ТП3
//
//  Created by mak on 02.05.2023.
//


//Определить абстрактный базовый класс «Печатное издание», для которого
//существует наименование, год издания, наименование издательства, количество страниц,
//аннотация; определить метод вывода на экран.
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#pragma once
class AbstracktCLASS {
public:
virtual void print() = 0;
    virtual ~AbstracktCLASS();
protected:
    string name;
    int year;
    string nameOfIzdat;
    int countStr;
    string anotation;
};
