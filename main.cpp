#include <iostream>
#include <vector>

class Student {
  std::string m_first = "First";
  std::string m_last = "Last";
  int m_id = 0;
  float m_avg = 0;

public:
  Student() {}

  Student(std::string first, std::string last, int id, float avg)
      : m_first(first), m_last(last), m_id(id), m_avg(avg) {};

  int getAvg() { return m_avg; }

  int getId() { return m_id; }

  std::string getFirst() { return m_first; }

  std::string getLast() { return m_last; }
};

int main(int argc, char *argv[]) {

  Student s2("Gus", "Sa", 1, 1.4354);

  std::cout << s2.getFirst() << "\n";

  return 0;
}
