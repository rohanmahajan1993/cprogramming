#include <assert.h>
#include <stdlib.h>
#include <string.h>
// These values are stored in the data and bss sections
// They are always initialized to 0; because easy for system to do
int value_global; // This is a global variable and can be referenced from other files
static int value_static; // This variable can only be referenced from this file and other files can use same name for static variables
 

void heap_allocator() {
  int * malloc_ptr = (int *)malloc(sizeof(int));
  //malloc does not zero out data; you get whatever was there before and so have to use memset
  memset(malloc_ptr, 0, sizeof(int)); // 0 is value to set every byte; sizeofint is number of bytes
  assert(*malloc_ptr == 0);
  *malloc_ptr = 5;
  assert(*malloc_ptr == 5);
  // calloc takes two parameter versus one for malloc due to historical reasons
  int * calloc_ptr = (int *)calloc(1, sizeof(int));
  assert(*calloc_ptr == 0);
}

int main() {
  value_global = 5;
  value_static = 3;
  int value_stack; // This variables is declared and allocated on the stack; initiaialized to whatever was present before
  assert(value_global == 5);
  assert(value_static == 3);
  heap_allocator();
}

