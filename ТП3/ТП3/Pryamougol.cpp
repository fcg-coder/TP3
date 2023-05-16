//
//  Pryamougol.cpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#include "Pryamougol.hpp"
#include <fstream>
using namespace std;


PRYAMOUGOL :: PRYAMOUGOL(int n) {
        ifstream file("P4.txt");
       int Xf;
       int Yf;
    file >> Xf;
          cout << "<Из файла>\t" << Xf << endl;
  
    file >> Yf;

          cout << "<Из файла>\t" << Yf << endl;
    
    
       file.close();
    
    X = Xf;
    Y = Yf;
}

PRYAMOUGOL :: PRYAMOUGOL(){

    X = 0;
    Y = 0;
};
PRYAMOUGOL::PRYAMOUGOL(double x, double y){
    X = x;
    Y = y;
};
double PRYAMOUGOL::Square(){
    std :: cout << "Площадь фигуры ->\t" << X*Y << endl ; 
    ofstream outfile4("4.txt");
    outfile4 << "Площадь фигуры ->\t" << X*Y << endl;
    return X*Y;
}; //Площадь






