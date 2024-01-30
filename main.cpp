#include "Collatz.h"
#include <iostream>
using namespace std;

// Work on Collatz.h first before proceeding
int main() {
  /*
  Write your code below to complete the assignment
  Check README.md for details
  Match formatting to the sample I/O provided
  Type command "./grade.sh" in the terminal to check your progress
  */
  int k;
  int num;
  cin>> k;
  for (int i=0; i<k; i++){
  cin >> num;
  collatz_total_stopping_time(num);
  }
  return 0;
}
