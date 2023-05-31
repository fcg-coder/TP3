//
//  Pryamougol.cpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#include "journal.hpp"
#include <iostream>
#include <fstream>
using namespace std;

journal ::journal (string N, int Y, string NI, int C, string A){
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

journal ::journal (){
    ifstream file ("journalRead.txt");
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

void journal :: print (){
    ofstream F("journal.txt");
    cout << "Журнал:\t Название - "<< name << "\t Год выпуска - " << year << "\t Название издательства - " << nameOfIzdat << "\t Количество страниц - " << countStr << "\t Анотация - " << anotation << "\n";

  
    F << "Журнал:\t Название - "<< name << "\t Год выпуска - " << year << "\t Название издательства - " << nameOfIzdat << "\t Количество страниц - " << countStr << "\t Анотация - " << anotation << "\n";
    F.close();
    
}





