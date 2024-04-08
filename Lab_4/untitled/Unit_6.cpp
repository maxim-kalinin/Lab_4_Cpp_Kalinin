#include "Unit_6.h"

int FactorialRekursiey(int);

void functionZadanie6()
{
    cout<<endl;
    cout<< "=========================================================================" <<endl;
    cout<< "                             Задание 6.                                  " <<endl;
    cout<< "=========================================================================" <<endl;
    cout<<endl;
    cout<< "Реализуйте нахождение факториала числа (n!), заданного пользователем," <<endl;
    cout<< "с помощью итераций и с помощью рекурсии." <<endl;
    cout<<endl;
    cout<< "Решение:" <<endl;
    cout<<endl;
    cout<< "Факториал числа 5, при помощи итерации." <<endl;

    int x = 5; // - число, факториал которого нужно найти
    int F = 1; // объявим переменную с результатом

    for(int i = 2; i <= x; i++) F = F * i;

    cout<< "Равно:  " << F <<endl;

    //----------------------------------------------------------

    cout<<endl;
    cout<< "Факториал числа 6, при помощи рекурсии." <<endl;

    cout << "Равно:  " << FactorialRekursiey(6) <<endl;
    cout<<endl;


}


int FactorialRekursiey(int x)
{
  return! x? 1 : x * FactorialRekursiey(x - 1);
}
