#include "task.h"
#include <iostream>
#include <libC/src/task.h>

namespace libb {
void work() {
  std::cout << "libB work:" << std::endl;
  libc::work();
}
} // namespace libb
