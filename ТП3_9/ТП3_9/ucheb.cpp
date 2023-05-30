//
//  Pryamougol.cpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#include "ucheb.hpp"
#include <iostream>
using namespace std;

ucheb ::ucheb (string N, int Y, string NI, int C, string A){
    //    string name;
    //    int year;
    //    string nameOfIzdat;
    //    int countStr;
    //    string anotation;
    name = N;
    year = Y;
    nameOfIzdat = NI;
    countStr = C;
    anotation = A;
}

void ucheb :: print (){
    ofstream F("ucheb.txt");
    cout << "Учебник:\t Название - "<< name << "\t Год выпуска - " << year << "\t Название издательства - " << nameOfIzdat << "\t Количество страниц - " << countStr << "\t Анотация - " << anotation << "\n";

  
    F << "Учебник:\t Название - "<< name << "\t Год выпуска - " << year << "\t Название издательства - " << nameOfIzdat << "\t Количество страниц - " << countStr << "\t Анотация - " << anotation << "\n";
    F.close();
}





