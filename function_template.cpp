#include <iostream>

using namespace std;

template <typename T1, typename T2>
T1 add(T1 num1, T2 num2);

int main () {
  cout << add(99.99, 200) << endl;
} 

template <typename T1, typename T2>
T1 add(T1 num1, T2 num2) {
  return num1 + num2;
}
