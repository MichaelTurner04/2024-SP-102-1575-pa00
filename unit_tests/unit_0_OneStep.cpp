#include "Collatz.h"
#include "test_utils.hpp"

int main(const int argc, const char **argv) {
  return test_wrapper(argc, argv, []() {
    int num1 = 4;
    int num2 = 5;
    int num3 = 1;

    collatz_one_step(num1);
    collatz_one_step(num2);
    collatz_one_step(num3);

    return (num1 == 2 && num2 == 16 && num3 == 4);
  });
}
