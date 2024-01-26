#include "Collatz.h"
#include "test_utils.hpp"

int main(const int argc, const char **argv) {
  return test_wrapper(argc, argv, []() {
    int num1 = 1;
    int num2 = 9;
    int num3 = 1024;

    int ans1 = collatz_total_stopping_time(num1);
    int ans2 = collatz_total_stopping_time(num2);
    int ans3 = collatz_total_stopping_time(num3);

    return (ans1 == 0 && ans2 == 19 && ans3 == 10);
  });
}
