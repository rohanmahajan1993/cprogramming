#include <assert.h>
// macros versus inline
// macros replace text during preprocessor while inline is just a compiler directive 
inline int value() {
  return 3;
}

int main() {
  assert(value() == 3);
}

