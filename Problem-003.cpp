
// all the non prime numbers are divisible by 2

#include <iostream>

int main() {

  auto num = 600851475143;

  for (auto pf = 2; pf * pf <= num; pf++) {

    while (num % pf == 0 && num != pf) {

      std::cout << "pf number inside while loop  " << pf << std::endl;

      num = num / pf;

      std::cout << "num after prime factorization inside while loop " << num

                << std::endl;

    }

  }

  std::cout << num;

}