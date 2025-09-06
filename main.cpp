#include <iostream>

void pp(int &i) { std::cout << &i << " " << i << " " << sizeof(i) << "\n"; }

int main(int argc, char *argv[]) {

  int arr[10];

  for (size_t i = 0; i < 10; i++) {
    pp(arr[i]);
  }

  return 0;
}
