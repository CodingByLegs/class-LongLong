
#include <iostream>
#include <string>
#include "longlong.h"

using namespace std;

void helpme(string x);

int main() {
  LongLong n(4294967295);
  unsigned int x = 4294967295;
  int y = -2147483647;
  int i;
  long long z = x;
  z += y;
  long long c = 50;  // 9 223 372 036 854 775 807   9223372036854775807
  int d = -51;
  for (i = 31; i >= 0; --i) {
    cout << ((c >> i) & 1) << " ";
  }
  cout << endl;
  n.show();
  cout << endl;
  cout << dec << x + 2 << endl;
  //cout << hex << c << endl;
  helpme("5347347");
  //  cout << hex << z << endl;
  //  cout << hex << x + y << endl;
  // cout << hex << c << endl;
  //  y = y*(-1);
  // cout << hex << y << endl;
  //  cout << hex << z << endl;
  //  z = z*(-1);
  // cout << hex << z << endl;
  system("pause");
  return 0;
}

void helpme(string x) {
  cout << x << endl;
}