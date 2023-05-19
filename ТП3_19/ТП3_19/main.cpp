//Создать абстрактный класс «Кривые» для вычисления координаты y для
//некоторой x.


//Создать производные классы «Прямая», «Эллипс», «Гипербола» со своими
//функциями вычисления y в зависимости от входного параметра x

#include <iostream>
#include "curves_BASE.hpp"
#include "line_CHILD.hpp"
#include "ellipse_CHILD.hpp"
#include "Hyperbole_CHILD.hpp"
using namespace std;

void test(){
    cout << "test\n";
    for (int i = 0; i < 10; i ++){
        cout << "\n\nTEST #" << i << "\n";
        cout << "\t";
        LINE line(rand()% 10 + 1 , rand()% 10 + 1, rand()% 10 + 1);
        cout << "\t";
        line.calculate();
        cout << "\t";
        
        
        ellipse EL(rand()% 10 + 1 , rand()% 10 + 1, rand()% 10 + 1);
        cout << "\t";
        EL.calculate();
        
        cout << "\t";
        hyperbole H(rand()% 10 + 1 , rand()% 10 + 1, rand()% 10 + 1);
        cout << "\t";
        H.calculate();
    }
    
    LINE L;
    ellipse E;
    hyperbole H;
    
    L.calculate();
    E.calculate();
    H.calculate();
}



int main(int argc, const char * argv[]) {
    // insert code here...
    
    test();
    
    //СЕРЕГА СДЕЛАЙ ПОЛЬЗОВАТЕЛЬСКИЙ ИНТЕРФЕС switch case
    /*
     
     
     cin >> choose;
     switch (choose){
     case 1:
     ....
     case 2:
     ....
     default:
     break;
     
     */
    std::cout << "Hello, World!\n";
    return 0;
}
