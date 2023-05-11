//Создать абстрактный базовый класс с виртуальной функцией «Площадь».



//Создать производные классы «Прямоугольник», «Круг», «Прямоугольный треугольник», «Трапеция» со своими функциямиплощади и переменными.


//Для проверки определить массив ссылок на абстрактный класс, которым присваиваются адреса различных объектов.
/*
Массив ссылок на абстрактный класс - это массив, элементами которого являются ссылки на объекты, созданные из класса, унаследованного от абстрактного класса. Для создания массива ссылок на абстрактный класс требуется определить переменную массива как тип указателя на абстрактный класс.

Пример объявления массива ссылок на абстрактный класс в C++:

AbstractClass* arr[] = {new ConcreteClass1(), new ConcreteClass2(), new ConcreteClass3()};


 Массив ссылок на абстрактный класс - это массив, который хранит ссылки на объекты абстрактного класса. Абстрактный класс не может быть использован напрямую для создания объектов, но может быть использован в качестве типа данных для указателей и ссылок.

Для создания массива ссылок на абстрактный класс следуйте этим шагам:



Определите массив элементов типа указатель на абстрактный класс.



Shape* shapes[10];





Создайте объекты, которые будут хранится в массиве.



Circle circle(3);

Rectangle rectangle(2, 4);





Присвойте адрес каждого объекта соответствующему элементу массива.



shapes[0] = &circle;

shapes[1] = &rectangle;



После создания массива, вы можете обращаться к его элементам так же, как и к обычным переменным:

for (int i = 0; i 2; i++) {

    shapes[i]->draw();

}



Здесь мы проходимся по каждому элементу массива и вызываем для каждого метод draw(), который определен в абстрактном классе и переопределен в производных классах.

Использование массивов ссылок на абстрактный класс позволяет работать с группой различных объектов через единый интерфейс, определенный в абстрактном классе. Это упрощает код и делает его более гибким.

 */




//  Запись в файл
/*
 
 Для работы с файлами в C++ на Mac с помощью Xcode можно использовать стандартные функции для ввода-вывода, такие как std::ifstream и std::ofstream.
 
 Например, чтобы прочитать данные из файла, можно использовать следующий код:

 #include <fstream>

 #include <string>



 int main() {

   std::ifstream infile("filename.txt");

   std::string line;

   while (std::getline(infile, line)) {

     // обработка строки

   }

 }



 Аналогично, чтобы записать данные в файл, можно использовать std::ofstream:

 #include <fstream>

 #include <string>



 int main() {

   std::ofstream outfile("output.txt");

   outfile << "Hello world!" << std::endl;

 }



 Обратите внимание, что при работе с файлами необходимо проверять успешность операций чтения/записи и обрабатывать возможные ошибки. Например:

 if (!infile) {

   // обработка ошибки открытия файла

 }



 if (!outfile) {

   // обработка ошибки записи в файл

 }



 Надеюсь, эти примеры помогут Вам начать работу с файлами в Xcode на Mac!

*/





//Чтение из файла
/*Чтение из файла в C++ можно осуществить с помощью класса ifstream из библиотеки <fstream>. Вот пример кода:
 
 #include <iostream>

 #include <fstream>

 using namespace std;



 int main() {

    ifstream file("example.txt");

    string line;

    while (getline(file, line)) {

       cout line << endl;

    }

    file.close();

    return 0;

 }



 В этом примере мы открываем файл “example.txt” с помощью объекта ifstream, читаем строки по очереди с помощью функции getline() и выводим их на экран. После окончания чтения файла мы закрываем его методом close().


*/




#include <iostream>
#include <stdlib.h>
#include <iosfwd>
#include <fstream>
#include <string>
#include "Triangle.hpp"
#include "Trapezoid.hpp"
#include "Circle.hpp"
#include "Pryamougol.hpp"
using namespace std;


int chose1,chose2,chose3;

string m ="Взять данные из файла или вбить с клавиатуры ?(0/1)\n\t-> ";
string m1 = "\n\n\n\n\n\nВыбери фигуру\n1-Трапеция\n2-Прямоугольный треугольник\n3-Kруг\n4-Прямоугольник\n5-Показать все фигуры\n6-Выйти из программы\n\t->\t";


void menu(){
    cout << m1;
    cin >> chose1;
    cout << "\n\n\n\n\n\n\n";
}


int main(int argc, const char * argv[]) {
    
    
    
    SQUERE* Array_of_Links [4]; //Определите массив элементов типа указатель на абстрактный класс.
    for (int t = 0; t < 4; t++){
        Array_of_Links[t] = 0;
    }                            //Shape* shapes[10];


    
    menu();
    chose3 = 1;
    while (chose3 == 1) {
        
        
        switch (chose1) {
            case 1:
                cout << m;
                cin >> chose2;
                if (chose2 == 0){
                    TRAPEZOID Tr(0);
                    Array_of_Links[0] = &Tr;
                    Array_of_Links[0]->Square();
                    //cout << Tr.Square();
                    menu();
                }
                else{
                    
                    cout << "Введи две сторонеы и высоту трапеции\n\t->\t";
                    int S1,S2,H;
                    cin >> S1;
                    cin >> S2;
                    cin >> H;
                    
                    TRAPEZOID TrP (S1, S2, H);
                    Array_of_Links[0] = &TrP;
                    Array_of_Links[0]->Square();
                    //cout << TrP.Square();
                    menu();
                }
                
                break;
                
            case 2:
                cout << m ;
                cin >> chose2;
                if (chose2 == 0){
                    TRIANGLE T(0);
                    Array_of_Links[1] = &T;
                    Array_of_Links[1]->Square();
                    //cout << T.Square();
                    menu();
                }
                else{
                    
                    cout << "Введи две сторонеы\n\t->\t";
                    int K1,K2;
                    cin >> K1;
                    cin >> K2;
                    TRIANGLE TP(K1,K2);
                    Array_of_Links[1] = &TP;
                    Array_of_Links[1]->Square();
                    //cout << TP.Square();
                    menu();
                }
                break;
            case 3:
                cout << m;
                cin >> chose2;
                if (chose2 == 0){
                    CIRCLE C(0);
                    Array_of_Links[2] = &C;
                    Array_of_Links[2]->Square();
                    //cout << C.Square();
                    menu();
                }
                else{
                    
                    cout << m ;
                    int R;
                    cin >> R;
                    CIRCLE CP(R);
                    Array_of_Links[2] = &CP;
                    Array_of_Links[2]->Square();
                    //cout << CP.Square();
                    menu();
                }
                break;
            case 4:
                cout << m;
                cin >> chose2;
                if (chose2 == 0){
                    PRYAMOUGOL P(0);
                    Array_of_Links[3] = &P;
                    Array_of_Links[3]->Square();
                    //cout << P.Square();
                    menu();
                }
                else{
                    
                    cout << "Введи две сторонеы\n\t->\t";
                    int X,Y;
                    cin >> X;
                    cin >> Y;
                    PRYAMOUGOL PP(X,Y);
                    Array_of_Links[3] = &PP;
                    Array_of_Links[3]->Square();
                    //cout << PP.Square();
                    menu();
                }
                break;
                
                
            case 5:
                std :: cout << "Все фигуры:\n";
                if (Array_of_Links[0]) {Array_of_Links[0]->Square();}
                if (Array_of_Links[1]) {Array_of_Links[1]->Square();}
                if (Array_of_Links[2]) {Array_of_Links[2]->Square();}
                if (Array_of_Links[3]) {Array_of_Links[3]->Square();}
                menu();
                break;
            case 6:
            
                chose3 = 404;
                break;
            default:
                break;
        }
    }
    
 

}
