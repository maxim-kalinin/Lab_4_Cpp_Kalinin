#include "Unit_2.h"

#include <algorithm>
#include <random>

void functionZadanie2()
{
  cout<<endl;
  cout<< "=========================================================================" <<endl;
  cout<< "                             Задание 2.                                  " <<endl;
  cout<< "=========================================================================" <<endl;
  cout<<endl;
  cout<< "Создать одномерный массив из 10 целых чисел, заполнить его числами," <<endl;
  cout<< "с помощью алгоритма Вихрь Мэрсена. Реализовать поиск минимального" <<endl;
  cout<< "и максимального значений элементов массива." <<endl;
  cout<<endl;
  cout<< "Решение:" <<endl;
  cout<<endl;
  cout<< "Вывод элементов массива:" <<endl;
  cout<<endl;


  int array[10];

  std::random_device rd;
  std::mt19937 mersenne(rd());

  for (int i = 0; i < 10; i++)
   {
     array[i] = mersenne();
     std::cout << array[i] <<endl;
   }

  cout<<endl;

  cout << "MIN значение  =  " << *min_element(begin(array), end(array)) << endl;
  cout << "MAX значение  =  " << *max_element(begin(array), end(array)) << endl;
  cout<<endl;

}
