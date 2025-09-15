#include <cstddef>
#include <iostream>

void pp(int &i) { std::cout << &i << " " << i << " " << sizeof(i) << "\n"; }

class IntArray {
  size_t m_size;
  int *m_arr;

public:
  IntArray(size_t size) : m_size(size), m_arr(new int[size]) {}
};

int main() { return 0; }
