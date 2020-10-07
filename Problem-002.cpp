
#include <iostream>

int main() {

  auto a = 1;

  auto b = 2;

  auto sum = 0;

  auto limit = 4000000;

  while (b <= limit) {

    if (b % 2 == 0) {

      sum += b;

    }

    auto next = a + b;

    a = b;

    b = next;

  }

  std::cout << sum;

}