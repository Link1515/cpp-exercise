#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0));

  int count = 0;
  int dice[7] = {}; // ignore element zero index 

  cout << "how many times do you want to roll the dice?" << endl;
  cin >> count;

  for (int i = 0; i < count; i++) {
    dice[rand() % 6 + 1]++;
  }

  for (int i = 1; i < size(dice); i++) {
    cout << i << ": " << (float) dice[i] / count * 100 << "%" << endl;
  }
}
