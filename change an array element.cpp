#include<iostream>
using namespace std;

int main()
{
  int num[5]={"23","12","34","56","89"};
  cout<<num[2];
  num[1]="10";
  cout<<"array element after changing is" num[1];
  return 0;
}
