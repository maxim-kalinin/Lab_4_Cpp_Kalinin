#include "Unit_4.h"


void functionZadanie4()
{
  cout<<endl;
  cout<< "=========================================================================" <<endl;
  cout<< "                             ������� 4.                                  " <<endl;
  cout<< "=========================================================================" <<endl;
  cout<<endl;
  cout<< "������� ��㬥�� ���ᨢ (������) 8�8," <<endl;
  cout<< "��������� �� �ᥢ����砩�묨 �᫠�� � �।���� �� 0 �� 15." <<endl;
  cout<< "����祭�묨 � ������� srand() � rand()." <<endl;
  cout<< "� ������� ��������� 横��� ॠ����� �㭪��," <<endl;
  cout<< "����� ��室�� �㬬� ����⮢ ������, ������ ��� ������� ���������" <<endl;
  cout<<endl;
  cout<< "��襭��:" <<endl;
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

   cout << "�㬬� ����⮢ ������, ����� ��� ������� ���������:"<<endl;
   cout<<endl;
   cout << "�㬬� 1-�� ��ப�  =  " << sum[0] << "  "<<endl;
   cout << "�㬬� 2-�� ��ப�  =  " << sum[1] << "  "<<endl;
   cout << "�㬬� 3-�� ��ப�  =  " << sum[2] << "  "<<endl;
   cout << "�㬬� 4-�� ��ப�  =  " << sum[3] << "  "<<endl;
   cout << "�㬬� 5-�� ��ப�  =  " << sum[4] << "  "<<endl;
   cout << "�㬬� 6-�� ��ப�  =  " << sum[5] << "  "<<endl;
   cout << "�㬬� 7-�� ��ப�  =  " << sum[6] << "  "<<endl;

   cout<<endl;
}
