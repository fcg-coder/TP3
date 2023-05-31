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

ucheb ::ucheb (){
    ifstream file ("uchebRead.txt");
    string N; int Y; string NI; int C; string A;
    file >> N;
    cout << "<Из файла>\t" << N << endl;
    file >> Y;
    cout << "<Из файла>\t" << Y << endl;
    file >> NI;
    cout << "<Из файла>\t" << NI << endl;
    file >> C;
    cout << "<Из файла>\t" << C << endl;
    file >> A;
    cout << "<Из файла>\t" << A << endl;

    name = N;
    year = Y;
    nameOfIzdat = NI;
    countStr = C;
    anotation = A;
   file.close();
}

void ucheb :: print (){
    ofstream F("ucheb.txt");
    cout << "Учебник:\t Название - "<< name << "\t Год выпуска - " << year << "\t Название издательства - " << nameOfIzdat << "\t Количество страниц - " << countStr << "\t Анотация - " << anotation << "\n";

  
    F << "Учебник:\t Название - "<< name << "\t Год выпуска - " << year << "\t Название издательства - " << nameOfIzdat << "\t Количество страниц - " << countStr << "\t Анотация - " << anotation << "\n";
    F.close();
}





