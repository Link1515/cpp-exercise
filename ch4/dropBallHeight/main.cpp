#include <iostream>

double calculateHeight(double intialHeight, double second) {
  constexpr double gravity_constant = 9.8;

  return intialHeight - gravity_constant * second * second / 2;
}

int main() {
  std::cout << "Enter the height of the tower in meters: ";
  double intialHeight{};
  std::cin >> intialHeight;

  double height{};
  double secondCount{};

  while(1){
    height = calculateHeight(intialHeight, secondCount);

    if(height < 0) break;

    std::cout << "At " << secondCount << " seconds, the ball is at height: " << height << " meters" << '\n';
    secondCount++;
  };

  std::cout << "At " << secondCount << " seconds, the ball is on the ground." << '\n';

  return 0;
}
