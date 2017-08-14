#include <assert.h>

int value; // This is a global variable and gets its own space in the executable

int main() {
  value = 5;
  assert(value == 5);
}
