//Определить абстрактный базовый класс «Печатное издание», для которого
//существует наименование, год издания, наименование издательства, количество страниц,
//аннотация; определить метод вывода на экран. Определить наследников: журнал, учебник,
//книга. Для каждого наследника переопределить вывод на экран.

#include <iostream>
#include <stdlib.h>
#include <iosfwd>
#include <fstream>
#include <string>
#include "journal.hpp"
#include "ucheb.hpp"
#include "book.hpp"
using namespace std;

string str1 = "Введите наименование, год издания, наименование издательства, количество страниц, аннотация\n\t->";


//Определить абстрактный базовый класс «Печатное издание», для которого
//существует наименование, год издания, наименование издательства, количество страниц,
//аннотация; определить метод вывода на экран. Определить наследников: журнал, учебник,
//книга. Для каждого наследника переопределить вывод на экран.

int main(int argc, const char * argv[]) {
        //Вспомогательные переменные
        string name1;
        int year1;
        string nameOfIzdat1;
        int countStr1;
        string anotation1;

                cout << str1;
                cin >>  name1;
                cin >> year1;
                cin >> nameOfIzdat1;
                cin >> countStr1;
                cin >> anotation1;
                journal J(name1, year1, nameOfIzdat1, countStr1, anotation1);
                J.print();

                cout << str1;
                cin >>  name1;
                cin >> year1;
                cin >> nameOfIzdat1;
                cin >> countStr1;
                cin >> anotation1;
                ucheb U(name1, year1, nameOfIzdat1, countStr1, anotation1);
                U.print();

                cout << str1;
                cin >>  name1;
                cin >> year1;
                cin >> nameOfIzdat1;
                cin >> countStr1;
                cin >> anotation1;
                book B(name1, year1, nameOfIzdat1, countStr1, anotation1);
                B.print();


}
