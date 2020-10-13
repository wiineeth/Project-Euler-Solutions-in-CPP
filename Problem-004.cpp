
#include <iostream>



auto makePalindrome = [](auto x) {

  auto res = x * 1000;         // res = 123000

  res += x / 100;              // 123000+1, res = 123001

  res += ((x / 10) % 10) * 10; //((123/10)%10)*10, res = 123021

  res += (x % 10) * 100;       //(123%10)*100, res= 123321

  return res;

};

int main() {

  auto found = false;

  for (auto max = 999; max >= 100 && !found; --max) {

    auto palin = makePalindrome(max);

    for (auto i = 100; i * i <= palin; ++i) {

      if (palin % i == 0) {

        auto factor = palin / i;

        if (factor >= 100 && factor <= 999) {

          std::cout << palin;

          found = true;

        }

      }

    }

  }

}