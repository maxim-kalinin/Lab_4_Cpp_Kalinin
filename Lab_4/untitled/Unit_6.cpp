#include "Unit_6.h"

int FactorialRekursiey(int);

void functionZadanie6()
{
    cout<<endl;
    cout<< "=========================================================================" <<endl;
    cout<< "                             ������� 6.                                  " <<endl;
    cout<< "=========================================================================" <<endl;
    cout<<endl;
    cout<< "�������� ��宦����� 䠪�ਠ�� �᫠ (n!), ��������� ���짮��⥫��," <<endl;
    cout<< "� ������� ���権 � � ������� ४��ᨨ." <<endl;
    cout<<endl;
    cout<< "��襭��:" <<endl;
    cout<<endl;
    cout<< "����ਠ� �᫠ 5, �� ����� ���樨." <<endl;

    int x = 5; // - �᫮, 䠪�ਠ� ���ண� �㦭� ����
    int F = 1; // ���� ��६����� � १���⮬

    for(int i = 2; i <= x; i++) F = F * i;

    cout<< "�����:  " << F <<endl;

    //----------------------------------------------------------

    cout<<endl;
    cout<< "����ਠ� �᫠ 6, �� ����� ४��ᨨ." <<endl;

    cout << "�����:  " << FactorialRekursiey(6) <<endl;
    cout<<endl;


}


int FactorialRekursiey(int x)
{
  return! x? 1 : x * FactorialRekursiey(x - 1);
}
