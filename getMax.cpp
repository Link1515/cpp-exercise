#include <iostream>

using namespace std;

double getMax(double, double, double);

int main () {
  double num1;
  double num2;
  double num3;

  cout << "Enter three number, and find the max one" << endl;

  cout << "Number 1: ";
  cin >> num1;

  cout << "Number 2: ";
  cin >> num2;

  cout << "Number 3: ";
  cin >> num3;

  cout << "Maximum is " << getMax(num1, num2, num3) << endl;
}

double getMax (double x, double y, double z) {
  double max = x;

  if (y > max) {
    max = y;
  }

  if (z > max) {
    max = z;
  }
  
  return max;
}
