//
//  Trapezoid.cpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#include "Trapezoid.hpp"
#include <fstream>
// (side1+side2)/2*height;

TRAPEZOID::TRAPEZOID(int n) {
    ifstream file("T1.txt");
   int s1;
   int s2;
   int h;
file >> s1;
      cout << "<Из файла>\t" << s1 << endl;
    
file >> s2;
      cout << "<Из файла>\t" << s2 << endl;

file >> h;

      cout << "<Из файла>\t" << h << endl;


   file.close();

    S1 = s1;
    S2 = s2;
    H = h;
}


TRAPEZOID::TRAPEZOID(){
    S1 = 0;
    S2 = 0;
    H = 0;
};


TRAPEZOID::TRAPEZOID(double s1, double s2, double h){
    S1 = s1;
    S2 = s2;
    H = h;
};

double TRAPEZOID::Square() {
    std :: cout << "Площадь фигуры ->\t" << (S1 + S2 )/ 2 * H << endl;
    
    ofstream outfile1("1.txt");
    outfile1 << "Площадь фигуры ->\t" << (S1 + S2 )/ 2 * H << endl;
    return (S1 + S2 )/ 2 * H ;
}; //
