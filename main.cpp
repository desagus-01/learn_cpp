void tennify(int *a) { *a = 10; }

int main() {
  int i = 12;
  tennify(&i);
  std::cout << i << "\n";
}
