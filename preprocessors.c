typedef int a;
// be caeful defines don't need any semicolon for comments
#define b int
#define value 100
// define is used a preprocessor director while typef is just a compiler token
// typedef obeys scoping
// The only reason you use extern is if you don't want to include header of linked file because too big or because header is too big
extern int c;
int main () {
  a var1 = 3;
  b var2 = value;
  int c;
  c = 3;
}
