/*
 * =====================================================================================
 *
 *       Filename:  foo.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  09/14/2016 10:51:09 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <iostream>

class SimException {};

int foo(int x) {
  int err = 0;
  try {
    if (x < 0) {
      throw SimException();
    }
  } catch (...) {
    err = 1;
  }

  return err;
}

int main() {
  int x = -20;
  try {
    int result = foo(x);
    std::cout << "result is " << result << std::endl;
  } catch (...) {
    std::cout << "Exception caught in main" << std::endl;
  }
  return 0;
}
