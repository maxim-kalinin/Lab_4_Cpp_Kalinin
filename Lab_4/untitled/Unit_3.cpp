#include "Unit_3.h"


void functionZadanie3()
{
  cout<<endl;
  cout<< "=========================================================================" <<endl;
  cout<< "                             ������� 3.                                  " <<endl;
  cout<< "=========================================================================" <<endl;
  cout<<endl;
  cout<< "������� �������� ������ ࠧ��஬ 5�5," <<endl;
  cout<< "� �뢥�� �� � ���᮫� � ᮡ����� ࠧ���." <<endl;
  cout<<endl;
  cout<< "��襭��:" <<endl;
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
