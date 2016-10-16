#include "bar.hpp"

#include "memory"

int bar(int x) {
  std::unique_ptr<double[]> y(new double[x]);

  for (int i = 0; i < x; i++) {
    y[i] = i * 2;
  }

  int result = 0;
  for (int i = 0; i < x; i++) {
    result += y[i];
  }
  return result;
}
