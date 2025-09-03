#include <iostream>
#include <vector>

class Student {
  std::string m_first = "First";
  std::string m_last = "Last";
  int m_id = 0;
  float m_avg = 0;

public:
};

int main(int argc, char *argv[]) {
  std::vector<float> vec;
  vec.push_back(42.3);
  vec.push_back(10.1);
  vec.push_back(19.5);

  for (auto &a : vec) {
    std::cout << a << "\n";
  }

  return 0;
}
