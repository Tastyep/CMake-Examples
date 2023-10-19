#include <iostream>
#include <libA/src/task.h>
#include <libB/src/task.h>
#include <libD/libd.h>

int main() {
  std::cout << "Main" << std::endl;

  liba::work();
  libb::work();

  libd::work();
}
