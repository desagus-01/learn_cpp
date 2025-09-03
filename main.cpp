#include <fstream>
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

  int getAvg() const { return m_avg; }

  int getId() const { return m_id; }

  std::string getFirst() const { return m_first; }

  std::string getLast() const { return m_last; }

  void print() const {
    std::cout << m_first << " " << m_last << " " << "\n";
    std::cout << m_id << " " << "m_avg" << "\n";
  }
};

class Course {
  std::string m_name = "Course";
  std::vector<Student> m_student;

public:
  Course() {}

  Course(const std::string &name) : m_name(name) {}

  void addStudent(const Student &s) { m_student.push_back(s); }

  const std::vector<Student> &getStudents() const { return m_student; }

  void print() const {
    for (auto &s : m_student) {
      s.print();
    }
  }

  void loadFromFile(const std::string &filename) {

    std::ifstream fin(filename);
    std::string first, last;
    int id;
    int avg;

    while (fin >> first) {
      fin >> last >> id >> avg;
      addStudent(Student(first, last, id, avg));
    }
  };
};

int main(int argc, char *argv[]) {
  Course c("mathy");

  c.loadFromFile("students.txt");

  c.print();

  return 0;
}
