// http://www.cplusplus.com/doc/tutorial/classes/
#include <assert.h>
#include "classes.h"
int Rectangle::area (int x, float y) {
  width = x;
  return y;
}

Rectangle::Rectangle () {
  width = 5;
  height = 3;
}

Rectangle::Rectangle (int x, int y) {
  width = x;
  height = y;
}

int Rectangle::size() {
  return 3;
}

template <class T>
TemplateClass<T>::TemplateClass(T t) {
 a = t;
}

Rectangle c1 (3,4);
int Rectangle::i = 0; //have to declare static variables outside the function
int main() 
{
  Rectangle a, b;
  a.width = 5;
  a.height = 7;
  //this line would fail because private variable a.color = 4;
  assert(a.width == 5);  
  assert(a.height == 7); 
  a.area(3,5);
  assert(a.width == 3); 
  // many different ways to call init; look at file to see them
  Rectangle c1 (3,4);
  c1.area(3, 5);
  Rectangle *r1;
  r1 = &c1;
  // new uses the heap; returns a pointer 
  Rectangle *r2 = new Rectangle(3, 5);
  delete(r2);
  // can still use basic instance logic for static variables and methods
  assert(c1.i == 0);
  assert(c1.size() == 3);
  //but can also use class logic
  assert(Rectangle::i == 0);    
  assert(Rectangle::size() == 3);    
}
