//
//  line_CHILD.cpp
//  ТП3_19
//
//  Created by mak on 19.05.2023.
//

#include <fstream>
#include "line_CHILD.hpp"
using namespace std;

LINE::LINE(double x1, double k1, double b1 ){
    cout << "Уравнение прямой имеет вид у = кх + в\n";

    x = x1;

    k = k1;
    b = b1;
}

LINE::LINE(){
    ifstream l("Lt.txt");
    l >> x;
    l >> k;
    l >> b;
    cout << "Из файла взяли значения х =" << x << ", к = " << k << ", в = " << b << "\n";
    l.close();
}



void LINE::calculate(){

    ofstream L("L.txt");
    cout << "y = "<< k << "x + " << b << " = " << k*x + b << "\n";
    L << "y = "<< k << "x + " << b << " = " << k*x + b << "\n";
    L.close();
};
