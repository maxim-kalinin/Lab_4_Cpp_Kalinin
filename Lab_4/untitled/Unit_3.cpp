#include "Unit_3.h"


void functionZadanie3()
{
  cout<<endl;
  cout<< "=========================================================================" <<endl;
  cout<< "                             Задание 3.                                  " <<endl;
  cout<< "=========================================================================" <<endl;
  cout<<endl;
  cout<< "Создать единичную матрицу размером 5х5," <<endl;
  cout<< "и вывести ее в консоль с соблюдением размера." <<endl;
  cout<<endl;
  cout<< "Решение:" <<endl;
  cout<<endl;


  int array[5][5];

  for (int j = 0; j < 5; j++)
   {
     for (int i = 0; i < 5; i++)
      {
        array[j][i] = 0;

        if(j==i) array[j][i] = 1;

        cout << array[j][i] <<" ";
      }
      cout<<endl;
    }

   cout<<endl;

}
