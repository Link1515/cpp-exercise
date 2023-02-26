#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));

  int count = 0;
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;
  int num5 = 0;
  int num6 = 0;

  cout << "how many times do you want to roll the dice?" << endl;
  cin >> count;

  for (int i = 0; i < count; i++) {
    int result = rand() % 6 + 1;
    
    switch(result){
      case 1: 
        num1++;
        break;

      case 2: 
        num2++;
        break;

      case 3: 
        num3++;
        break;

      case 4: 
        num4++;
        break;

      case 5: 
        num5++;
        break;

      case 6: 
        num6++;
        break;
    }
    
  }  

  cout << "1: " << (float) num1 / count * 100 << "%" << endl; 
  cout << "2: " << (float) num2 / count * 100 << "%" << endl; 
  cout << "3: " << (float) num3 / count * 100 << "%" << endl; 
  cout << "4: " << (float) num4 / count * 100 << "%" << endl; 
  cout << "5: " << (float) num5 / count * 100 << "%" << endl; 
  cout << "6: " << (float) num6 / count * 100 << "%" << endl; 
}
