#include <assert.h>
#include <stdio.h>

void basicPointers() {
   int a = 5;
   int *a_pointer = &a;
   *a_pointer = 6;
   assert(a == 6);
   int b = 7.0; 
   a_pointer = &b;
   *a_pointer = 3;   
   assert(b == 3);
}

void castingPointers() {
   int a = 5;
   // a_pointer will always be declared as an int pointer
   // can get address from a pointer and cast that to new pointer but a will always be int pointer
   // can't do something like this  a_pointer = (float *) &b;
   int *a_pointer = &a;
   *a_pointer = 6;
   assert(a == 6);
   float b = 7.0;
   float * a_float_pointer = (float *) &b;
   *a_float_pointer = 3.0;
   assert(b == 3.0);
}

void voidPointers() {
   // void pointers useful for calls such as malloc where you don't have to a different malloc for each return type 
   int a = 5;
   void *a_pointer = &a;
   int *a_i = (int *) a_pointer; 
   * (int *) a_pointer = 6;
   assert(a == 6);
   *a_i = 7;
   assert(a == 7);
   float b = 7.0;
   // this line is meaningless because a will always be a void pointer and this won't change that 
   a_pointer = (float *) &b;
   // Why is this?
   a_pointer = (float *) a_pointer;
    * (float *) a_pointer = 3.0;
   assert(b == 3.0);
}

// Even pointers are passed by value
// Can't change the location that the point too
// Can change the value though even though pointer copied
// Not changing location versus being able to change valuer
void passingPointersHelper(int * value) {
  *value = 7;
}

void passingPointers() {
  int a = 5;
  int * a_pointer = &a;
  passingPointersHelper(a_pointer);
  assert(a == 7);
}
// Pass double pointers because can change value of double pointer which is location of regular pointer
void passingDoublePointersHelper(int ** doublePointer, int * newPointer) {
  *doublePointer = newPointer;
}

void passingDoublePointers() {
 int a = 0;
 int b = 1;
 int * a_pointer = &a;
 int * b_pointer = &b;
 assert(*a_pointer == 0);
 passingDoublePointersHelper(&a_pointer, b_pointer);
 assert(*a_pointer == 1);
}

// key difference between arrays and pointers is that pointer has its own memory space which is distinct from values it points too
// also compiler knows how long array is
// can use array notation for pointers but they are distinct
void arraysAndPointers() {
 int a[10];
 int * b = a;
 a[2] = 5;
 assert(b[2] == 6); 
}
// There are no referencers in c btw

int main() {
   voidPointers();
   castingPointers();
   passingPointers();
   passingDoublePointers();
   arraysAndPointers();
}
