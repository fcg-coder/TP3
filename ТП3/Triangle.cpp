//
//  Triangle.cpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#include "Triangle.hpp"


TRIANGLE :: TRIANGLE (int n) {
    ifstream file("T2.txt");
   int k1;
   int k2;
file >> k1;
      cout << "<Из файла>\t" << k1 << endl;

file >> k2;

      cout << "<Из файла>\t" << k2 << endl;


   file.close();

    Katet1 = k1;
    Katet2 = k2;
}
TRIANGLE::TRIANGLE(){
    Katet1 = 0;
    Katet2 = 0;
};
TRIANGLE::TRIANGLE(double K1, double K2){
    Katet1 = K1;
    Katet2 = K2;
};
double TRIANGLE::Square() {
    std :: cout << "Площадь фигуры ->\t" << Katet1 * Katet2 / 2<< endl;
    
    ofstream outfile2("2.txt");
    outfile2 << "Площадь фигуры ->\t" << Katet1 * Katet2 / 2 << endl;
    return Katet1 * Katet2 / 2;
}; //
