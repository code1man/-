#include <iostream>
using namespace std;
const int binary = 32;
int main()
{
  float temperture;
  cout << "���������¶�:";
  cin >> temperture;
  float F;
  F = temperture * 1.8 + binary;
  cout << "�����¶�Ϊ��" << F << endl;
  system("pause");
  return 0;
}