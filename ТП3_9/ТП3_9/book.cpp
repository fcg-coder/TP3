//
//  Pryamougol.cpp
//  ТП3
//
//  Created by mak on 04.05.2023.
//

#include "book.hpp"
#include <iostream>
using namespace std;

book ::book (string N, int Y, string NI, int C, string A){
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

book ::book (){
    ifstream file ("bookRead.txt");
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


void book :: print (){
    ofstream F("book.txt");
    cout << "Книга:\t Название - "<< name << "\t Год выпуска - " << year << "\t Название издательства - " << nameOfIzdat << "\t Количество страниц - " << countStr << "\t Анотация - " << anotation << "\n";

  
    F << "Книга:\t Название - "<< name << "\t Год выпуска - " << year << "\t Название издательства - " << nameOfIzdat << "\t Количество страниц - " << countStr << "\t Анотация - " << anotation << "\n";
    F.close();
}





