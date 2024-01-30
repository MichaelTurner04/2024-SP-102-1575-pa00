#ifndef COLLATZ_H
#define COLLATZ_H
using namespace std;
#include <iostream>

/*
Take an integer as parameter and perform ONE STEP of the Collatz function
If the int is even, divide it by two
If the int is odd, multiply it by three and add one

https://en.wikipedia.org/wiki/Collatz_conjecture
*/
void collatz_one_step(int &num) {
  /*
  Write your code below to complete the function
  */
  if (num % 2 == 0) {
    num /= 2;
  } else {
    num = (num * 3) + 1;
  }
}

/*
Return the number of steps of the Collatz function needed to reduce num to 1
If num is already <= 1, return a value of 0
*/
int collatz_total_stopping_time(int num) {
  /*//
  Write your code below to complete the function
  */
  if (num == 0) {
    // cout << "total stopping time of 0"<< endl;
    return num;
  }
  int count = 0;
  while (num > 1) {
    collatz_one_step(num);
    // cout << "-> "<<num;
    count++;
  }
  // cout<< endl << "Total stopping time of "<< count << endl;
  return count;
}

#endif
