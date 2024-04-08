#include "Unit_1.h"


void functionZadanie1()
{

cout<< "=========================================================================" <<endl;
cout<< "                            ������� 1.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout<< "������� �८�ࠧ������ ⨯�� �� � ���� (�-style cast, static_cast)." <<endl;
cout<< "᫥����� ��䬥��᪨� ��ࠦ����." <<endl;
cout<< "��� ��६�����: int x; float y; double z; unsigned short k;" <<endl;
cout<< "1) int i = (x+y)*z+k;" <<endl;
cout<< "2) k = x-y/z;" <<endl;
cout<< "3) z = x*y+z/x;" <<endl;
cout<< "4) unsigned int ui = x/y+k;" <<endl;
cout<< "5) short s = x%(x/y);" <<endl;
cout<<endl;
cout<< "��襭��:" <<endl;

int x = 5;
float y = 6;
double z = 7;
unsigned short k = 8;

cout<<endl;
cout<< " > �ਢ������ ⨯�� � �⨫� �-style cast" <<endl;
cout<<endl;

//-------------------------------------------------------------------------------------

cout<< "��ࠦ���� 1." <<endl;
cout<< "����� �ਢ������ ⨯��: int i = (int)((x+y)*z+k);" <<endl;

int i = (int)((x+y)*z+k);
cout<< "�����:  " << i <<endl;


cout<< "�� �� �ਢ������ ⨯��: int i = (x+y)*z+k;" <<endl;
i = (x+y)*z+k;
cout<< "�����:  " << i <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "��ࠦ���� 2." <<endl;
cout<< "����� �ਢ������ ⨯��: unsigned short k = (unsigned short) (x-y/z);" <<endl;
k = (unsigned short) (x-y/z);
cout<< "�����:  " << k <<endl;


cout<< "�� �� �ਢ������ ⨯��: unsigned short k = x-y/z;" <<endl;
k = x-y/z;
cout<< "�����:  " << k <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "��ࠦ���� 3." <<endl;
cout<< "����� �ਢ������ ⨯��: double z = (double) (x*y+z/x);" <<endl;
z = (double) (x*y+z/x);
cout<< "�����:  " << z <<endl;


cout<< "�� �� �ਢ������ ⨯��: double z = x*y+z/x;" <<endl;
z = x*y+z/x;
cout<< "�����:  " << z <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "��ࠦ���� 4." <<endl;
cout<< "����� �ਢ������ ⨯��: unsigned int ui = (unsigned int) (x/y+k);" <<endl;

unsigned int ui = (unsigned int) (x/y+k);
cout<< "�����:  " << ui <<endl;


cout<< "�� �� �ਢ������ ⨯��: unsigned int ui = x/y+k;" <<endl;

ui = x/y+k;
cout<< "�����:  " << ui <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "��ࠦ���� 5." <<endl;
cout<< "����� �ਢ������ ⨯��: short s = x%(x/y);" <<endl;
cout<< "�㦭� �믮����� � ��� �⠯�, ��⮬� �� x/y ����� ���� ����" <<endl;
cout<< "� �� ���� ������ �����, ���⮬� ��ࠦ���� �㤥� �룫拉��:" <<endl;
cout<< "int perem = (int) x/y;" <<endl;
cout<< "if(perem !=0) s = x % perem;" <<endl;

short s=0;

int perem = (int) x/y;
if(perem !=0) s = x % perem;

cout<< "���⮪ ࠢ��:  " << s <<endl;



cout<< "�� �� �ਢ������ ⨯��: short s = x%(x/y);" <<endl;
cout<< "ᤥ���� �� ���������, ��堭��� �몠 �++ �� ��������" <<endl;
cout<< "�஢����� ������� � ���⪮� ��� ⨯� float" <<endl;

cout<<endl;



//=======================================================================================
//=======================================================================================
//=======================================================================================



cout<<endl;
cout<< " > �ਢ������ ⨯�� � �⨫� static_cast" <<endl;
cout<<endl;

//-------------------------------------------------------------------------------------

cout<< "��ࠦ���� 1." <<endl;
cout<< "int i = static_cast<int> ((x+y)*z+k);" <<endl;

i = static_cast<int> ((x+y)*z+k);
cout<< "�����:  " << i <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "��ࠦ���� 2." <<endl;
cout<< "unsigned short k = static_cast<unsigned short> (x-y/z);" <<endl;
k = static_cast<unsigned short> (x-y/z);
cout<< "�����:  " << k <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "��ࠦ���� 3." <<endl;
cout<< "double z = static_cast<double> (x*y+z/x);" <<endl;
z = static_cast<double> (x*y+z/x);
cout<< "�����:  " << z <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "��ࠦ���� 4." <<endl;
cout<< "unsigned int ui = static_cast<unsigned int> (x/y+k);" <<endl;

ui = static_cast<unsigned int> (x/y+k);
cout<< "�����:  " << ui <<endl;

cout<<endl<<endl;

//-------------------------------------------------------------------------------------

cout<< "��ࠦ���� 5." <<endl;
cout<< "short s = x%(x/y);" <<endl;

short s2 = 0;

int perem2 = static_cast<int> (x/y);
if(perem2 !=0) s2 = x % perem2;

cout<< "���⮪ ࠢ��:  " << s2 <<endl;
cout<<endl;

}
