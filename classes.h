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
template <class T>
class TemplateClass {
  public:
    TemplateClass(T);
    T a;
}; 
