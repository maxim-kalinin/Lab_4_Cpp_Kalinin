#include "Unit_5.h"

#include <iomanip>

void functionZadanie5()
{
    cout<<endl;
    cout<< "=========================================================================" <<endl;
    cout<< "                             ������� 5.                                  " <<endl;
    cout<< "=========================================================================" <<endl;
    cout<<endl;
    cout<< "���ࠡ���� �ணࠬ��, ����� �ᯮ���� 横��, �뢮��� �㪢�" <<endl;
    cout<< "������᪮�� ��䠢�� �� a �� z ����� � ������묨 ������ ⠡���� ASCII." <<endl;

    cout<<endl;
    cout<< "��襭��:" <<endl;
    cout<<endl;


    for (int asc_char = 32; asc_char  < 123; asc_char += 7)
       {
          for (int col_num = 0; col_num < 7; col_num++)
          {
             int output = asc_char + col_num;
             std::cout << std::setw(4) << output << std::setw(4) << static_cast<char>(output);
          }
          std::cout << "\n";
       }

    cout<<endl;
}
