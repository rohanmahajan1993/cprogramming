typedef int a;
// be caeful defines don't need any semicolon for comments
#define b int
#define value 100
// define is used a preprocessor director while typef is just a compiler token
// typedef obeys scoping
int main () {
  a var1 = 3;
  b var2 = value;
}
