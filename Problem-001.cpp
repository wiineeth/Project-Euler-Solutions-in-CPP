
#include <iostream>

int main() {

  auto sum = [](auto x) { return x * (x + 1) / 2; };

  auto sumThree = 3 * sum(999 / 3);

  auto sumFive = 5 * sum(999 / 5);

  auto sumFifteen = 15 * sum(999 / 15);

  std::cout << sumThree + sumFive - sumFifteen;

}