#include "Unit_1.h"


void functionZadanie1()
{

cout<< "=========================================================================" <<endl;
cout<< "                            Задание 1.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout<< "Сделать преобразование типов явное и неявное (С-style cast, static_cast)." <<endl;
cout<< "следующих арифметических выражений." <<endl;
cout<< "Тип переменных: int x; float y; double z; unsigned short k;" <<endl;
cout<< "1) int i = (x+y)*z+k;" <<endl;
cout<< "2) k = x-y/z;" <<endl;
cout<< "3) z = x*y+z/x;" <<endl;
cout<< "4) unsigned int ui = x/y+k;" <<endl;
cout<< "5) short s = x%(x/y);" <<endl;
cout<<endl;
cout<< "Решение:" <<endl;

int x = 5;
float y = 6;
double z = 7;
unsigned short k = 8;

cout<<endl;
cout<< " > приведение типов в стиле С-style cast" <<endl;
cout<<endl;

//-------------------------------------------------------------------------------------

cout<< "Выражение 1." <<endl;
cout<< "Явное приведение типов: int i = (int)((x+y)*z+k);" <<endl;

int i = (int)((x+y)*z+k);
cout<< "Равно:  " << i <<endl;


cout<< "Не явное приведение типов: int i = (x+y)*z+k;" <<endl;
i = (x+y)*z+k;
cout<< "Равно:  " << i <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "Выражение 2." <<endl;
cout<< "Явное приведение типов: unsigned short k = (unsigned short) (x-y/z);" <<endl;
k = (unsigned short) (x-y/z);
cout<< "Равно:  " << k <<endl;


cout<< "Не явное приведение типов: unsigned short k = x-y/z;" <<endl;
k = x-y/z;
cout<< "Равно:  " << k <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "Выражение 3." <<endl;
cout<< "Явное приведение типов: double z = (double) (x*y+z/x);" <<endl;
z = (double) (x*y+z/x);
cout<< "Равно:  " << z <<endl;


cout<< "Не явное приведение типов: double z = x*y+z/x;" <<endl;
z = x*y+z/x;
cout<< "Равно:  " << z <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "Выражение 4." <<endl;
cout<< "Явное приведение типов: unsigned int ui = (unsigned int) (x/y+k);" <<endl;

unsigned int ui = (unsigned int) (x/y+k);
cout<< "Равно:  " << ui <<endl;


cout<< "Не явное приведение типов: unsigned int ui = x/y+k;" <<endl;

ui = x/y+k;
cout<< "Равно:  " << ui <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "Выражение 5." <<endl;
cout<< "Явное приведение типов: short s = x%(x/y);" <<endl;
cout<< "Нужно выполнять в два этапа, потому что x/y может дать ноль" <<endl;
cout<< "А на ноль делить нельзя, поэтому выражение будет выглядеть:" <<endl;
cout<< "int perem = (int) x/y;" <<endl;
cout<< "if(perem !=0) s = x % perem;" <<endl;

short s=0;

int perem = (int) x/y;
if(perem !=0) s = x % perem;

cout<< "Остаток равен:  " << s <<endl;



cout<< "Не явное приведение типов: short s = x%(x/y);" <<endl;
cout<< "сделать не получиться, механизм языка С++ не позволяет" <<endl;
cout<< "проводить деление с остатком для типа float" <<endl;

cout<<endl;



//=======================================================================================
//=======================================================================================
//=======================================================================================



cout<<endl;
cout<< " > приведение типов в стиле static_cast" <<endl;
cout<<endl;

//-------------------------------------------------------------------------------------

cout<< "Выражение 1." <<endl;
cout<< "int i = static_cast<int> ((x+y)*z+k);" <<endl;

i = static_cast<int> ((x+y)*z+k);
cout<< "Равно:  " << i <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "Выражение 2." <<endl;
cout<< "unsigned short k = static_cast<unsigned short> (x-y/z);" <<endl;
k = static_cast<unsigned short> (x-y/z);
cout<< "Равно:  " << k <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "Выражение 3." <<endl;
cout<< "double z = static_cast<double> (x*y+z/x);" <<endl;
z = static_cast<double> (x*y+z/x);
cout<< "Равно:  " << z <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "Выражение 4." <<endl;
cout<< "unsigned int ui = static_cast<unsigned int> (x/y+k);" <<endl;

ui = static_cast<unsigned int> (x/y+k);
cout<< "Равно:  " << ui <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "Выражение 5." <<endl;
cout<< "short s = x%(x/y);" <<endl;

short s2 = 0;

int perem2 = static_cast<int> (x/y);
if(perem2 !=0) s2 = x % perem2;

cout<< "Остаток равен:  " << s2 <<endl;
cout<<endl;

}
