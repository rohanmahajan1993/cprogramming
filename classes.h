// Generally wwant to declare structures here but have implementations here
class Rectangle
{
 int color; // private variables
 public:
   static int i;
   int height;
   int width;
   int  area (int, float);
   static int size ();
   Rectangle ();
   Rectangle(int, int);
};

// Templates are basically generics
// Have to use this template keyword everywhre
template <class T>
class TemplateClass {
  public:
    TemplateClass(T);
    T a;
}; 
