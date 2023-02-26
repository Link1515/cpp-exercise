#include <iostream>

using namespace std;

int factorial (int input);

int main () {
  int input;

  cout << "Enter factorial input number: " << endl;
  cin >> input;
  
  cout << "Answer: " << factorial(input) << endl; 
} 

int factorial (int input) {
  if (input == 1) {
    return 1;
  }

  return input * factorial(input - 1);
}

