//
//  Hyperbole_CHILD.cpp
//  ТП3_19
//
//  Created by mak on 19.05.2023.
//

#include "Hyperbole_CHILD.hpp"
#include <fstream>
using namespace std;

hyperbole::hyperbole(double x1, double k1, double b1 ){
    cout << "Уравнение гиперболы имеет вид у = кх^2 + в\n";

    x = x1;

    k = k1;
    b = b1;
}

hyperbole::hyperbole(){
    ifstream h("Ht.txt");
    h >> x;
    h >> k;
    h >> b;
    cout << "Из файла взяли значения х =" << x << ", к = " << k << ", в = " << b << "\n";
    h.close();
}


void hyperbole::calculate(){
    ofstream H("H.txt");
    cout << "y = "<< k << "x^2 + " << b << " = " << k*x*x + b << "\n";
    H << "y = "<< k << "x^2 + " << b << " = " << k*x*x + b << "\n";
    H.close();
};

