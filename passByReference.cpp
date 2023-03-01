#include <iostream>

using namespace std;

void modifyRef (int &a);

int main()
{
  int num = 10;
  modifyRef(num);

  cout << num;
}

void modifyRef (int &a) {
  a += 10;
}