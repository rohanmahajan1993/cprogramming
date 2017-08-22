#include <assert.h>
// Generally want to put structs in header file
// depdends on whether you need the defintion
// https://en.wikipedia.org/wiki/One_Definition_Rule
struct Books  {
   int a;
   int b;
   int c;
   int d;
   int e: 4; // number of bits
} b1, b2;
// Books is name or basically class of structs
// book1 and books 2 are instances of structs
void basic_structs() {
  struct Books b3; // can also declare instance like this
  b3.a = 5;
  b2.a = 5;
  b1.b = 6;
  struct Books b4 = {1, 2, 3, 4, 5}; // alternative way to initialize structs
}

// could have used value name and would have worked just as well as values t 
// use typedef so don't have to use word struct everywhere
// name after here is not instances but just new name
typedef struct values {
  int a;
  int b;
} values_t;

typedef struct a {
  int a;
  int b;
} a;

typedef struct  {
  int a;
  int b;
} b;

void typedefStruct() {
  values_t a = {1, 2};
  struct values b = {1, 2};
}

void structPointers() {
  values_t a = {1, 2};
  values_t *a_pointer = &a;
  (*a_pointer).a = 3; 
  a_pointer->b = 4;  //  shorthand to access values from struct pointers
  assert(a.a == 3);
  assert(a.b == 4);
}
// in union, only want to define one of the values compared to struct where define all member of struct
union Data {
   int i;
   float f;
   char str[20];
};

void unionFunction() {
  data d;
  d.i = 3;
  assert(d.i == 3);
}
int main() {
 basic_structs();
 typedefStruct();
 structPointers(); 
 unionFunction(); 
}
