//
//  Circle.cpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#include "Circle.hpp"



CIRCLE::CIRCLE(double r1) {
R = r1;
pi = 3.14;
}

CIRCLE::CIRCLE(int n) {
        ifstream file("C3.txt");
       int Rf;
       while (file >> Rf) {
          cout << "<Из файла>\t" << Rf << endl;
       }
       file.close();
    
    R = Rf;
    pi = 3.14;
}

CIRCLE::CIRCLE() {
R = 0;
pi = 3.14;
}

double CIRCLE::Square() {
    std :: cout << "Площадь фигуры ->\t" << pi*R << endl;
    ofstream outfile3("3.txt");
    outfile3 << "Площадь фигуры ->\t" << pi*R << endl;
return pi*R;
}
