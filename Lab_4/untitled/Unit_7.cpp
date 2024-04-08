#include "Unit_7.h"


#include <iostream>
#include <vector>

using namespace std;

void functionZadanie7()
{
  cout<<endl;
  cout<< "=========================================================================" <<endl;
  cout<< "                             Задание 7.                                  " <<endl;
  cout<< "=========================================================================" <<endl;
  cout<<endl;
  cout<< "Разработайте программу, которая выводит следующие последовательности:" <<endl;
  cout<<endl;

  int n = 10;

     for (int i = 1; i <= n; i++) {

       for (int j = 0; j < n - i; j++)
            cout << " ";

       int z = 0;

       for (int j = 1; j <= i; j++){
            z+=j;
            cout << std::to_string(j) + " ";
       }
            cout<< "  ==  " + std::to_string(z);
            cout << endl;
       }

     cout << endl;

}
