#include "Unit_2.h"

#include <algorithm>
#include <random>

void functionZadanie2()
{
  cout<<endl;
  cout<< "=========================================================================" <<endl;
  cout<< "                             ������� 2.                                  " <<endl;
  cout<< "=========================================================================" <<endl;
  cout<<endl;
  cout<< "������� �������� ���ᨢ �� 10 楫�� �ᥫ, ��������� ��� �᫠��," <<endl;
  cout<< "� ������� �����⬠ ����� ���ᥭ�. ����������� ���� �������쭮��" <<endl;
  cout<< "� ���ᨬ��쭮�� ���祭�� ����⮢ ���ᨢ�." <<endl;
  cout<<endl;
  cout<< "��襭��:" <<endl;
  cout<<endl;
  cout<< "�뢮� ����⮢ ���ᨢ�:" <<endl;
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

  cout << "MIN ���祭��  =  " << *min_element(begin(array), end(array)) << endl;
  cout << "MAX ���祭��  =  " << *max_element(begin(array), end(array)) << endl;
  cout<<endl;

}
