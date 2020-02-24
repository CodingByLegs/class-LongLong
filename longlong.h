#pragma once

#include <iostream>

using namespace std;

const unsigned long low_limit = 4294967295;  // 4 294 967 295
const long high_limit = 2147483647;  // 2 147 483 647

class LongLong {
private:
  int high;
  unsigned int low;
public:
  LongLong();
  LongLong(int sign, int _high, unsigned int _low);  // 1 = +, -1 = -, 0 = high определяеь знак
  LongLong(int _low);
  LongLong(const LongLong &num);
  ~LongLong();
  LongLong operator+(const LongLong &c);
  LongLong operator-(const LongLong &c);
  LongLong operator/(const LongLong &c);
  void show();
private:
  void setSign();
  int getSign();
};

