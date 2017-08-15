// http://www.cplusplus.com/doc/tutorial/classes/
#include <assert.h>
#include <classes.h>

int main() 
{
  Rectangle a, b;
  a.width = 5;
  a.height = 7;
  //this line would fail because private variable a.color = 4;
  assert(a.width == 5);  
  assert(a.height == 7);  
}
