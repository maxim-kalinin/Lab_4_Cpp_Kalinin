#include "Unit_4.h"


void functionZadanie4()
{
  cout<<endl;
  cout<< "=========================================================================" <<endl;
  cout<< "                             Задание 4.                                  " <<endl;
  cout<< "=========================================================================" <<endl;
  cout<<endl;
  cout<< "Создать двумерный массив (матрицу) 8х8," <<endl;
  cout<< "заполнить ее псевдослучайными числами в пределах от 0 до 15." <<endl;
  cout<< "полученными с помощью srand() и rand()." <<endl;
  cout<< "С помощью вложенных циклов реализуйте функцию," <<endl;
  cout<< "которая находит сумму элементов матрицы, лежащих выше главной диагонали" <<endl;
  cout<<endl;
  cout<< "Решение:" <<endl;
  cout<<endl;


  int array[8][8];
  int sum[8]={0};

   for (int row = 0, n=0; row < 8; row++, n++)
   {
    for (int col = 0; col < 8; col++)
    {

       array[row][col] = 0+rand()%15;

       if(row!=col && col > n) sum[row] += array[row][col];

       cout.width(5);
       cout.setf(ios::left);
       if(row < 7) cout << array[row][col];
    }
    cout<<endl;
   }


   cout<<endl;

   cout << "Сумма элементов матрицы, которые выше главной диагонали:"<<endl;
   cout<<endl;
   cout << "Сумма 1-ой строки  =  " << sum[0] << "  "<<endl;
   cout << "Сумма 2-ой строки  =  " << sum[1] << "  "<<endl;
   cout << "Сумма 3-ой строки  =  " << sum[2] << "  "<<endl;
   cout << "Сумма 4-ой строки  =  " << sum[3] << "  "<<endl;
   cout << "Сумма 5-ой строки  =  " << sum[4] << "  "<<endl;
   cout << "Сумма 6-ой строки  =  " << sum[5] << "  "<<endl;
   cout << "Сумма 7-ой строки  =  " << sum[6] << "  "<<endl;

   cout<<endl;
}
