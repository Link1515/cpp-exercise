#include <iostream>

using namespace std;

int fibonacci (int index);

int main () {
  int index{};

  cout << "Enter fibonacci index number: " << endl;
  cin >> index;
  
  cout << "Answer: " << fibonacci(index) << endl; 
} 

int fibonacci (int index) {
  if (index <= 1) {
    return 1;
  }

  return fibonacci(index - 1) + fibonacci(index - 2);
}

