#include <assert.h>

char ch = 15; //1 bytes
unsigned char c = 25; // 1 byte only positive
int i = 25; // 2 to 4 bytes
long l  = 15; //has more bytes than int
float f = 3.0; //decimal value
double d = 5.0; //has more bytes than float and thus has higher range
const double constf = 5.0; //const just lets compiler know value won't change; can impact optimizations, checking, and make it clearer for programmer 

int main() {
    enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
    enum week day;
    day = Wed;
    assert(day == Wed);
}
