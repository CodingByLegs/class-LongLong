
#include "longlong.h"

LongLong::LongLong() {
  high = 1;
  low = 0;
}

// high всегла на 1 больше/меньше, чтобы был определен знак
LongLong::LongLong(int sign, int _high, unsigned int _low) {
  if (sign == 0) {
    if (_high < 0) {
      high = _high - 1;
    } else {
      high = _high + 1;
    }
    low = _low;
  } else if (sign == -1){
    high = -1;
  } else if (sign == 1){
    high = 1;
  }
  
}

LongLong::LongLong(int _low) {
  if (_low < 0) {
    high = - 1;
    low = -1 * _low;
  } else {
    high = 1;
    low = _low;
  }
}

LongLong::LongLong(const LongLong &num) {
  high = num.high;
  low = num.low;
}

LongLong::~LongLong() {
  high = 0;
  low = 0;
}

LongLong LongLong::operator+(const LongLong &c) {
  LongLong res;
  res.high -= 1;  // High по дефолту = 1
  res.high = *(this)->getSign + c.getSign;
  res.low = low + c.low;
  return res.setSign;  // не забываем прибавить/убавить 1
}

LongLong LongLong::operator-(const LongLong &c) {
  LongLong res;
  res.high -= 1;
  res.high = *(this) - c.getSign;
  res.low = low - c.low;
  return res.setSign;
}

LongLong LongLong::operator/(const LongLong &c) {
  LongLong res;
  if (*(this)->getSign == 0 && c.getSign != 0) {
    return res.setSign;
  } else if (*(this)->getSign != 0 && c.getSign == 0) {

  } else if (*(this)->getSign != 0 && c.getSign != 0) {

  } else {
    
  }
  res.high = high / c.high;
}

void LongLong::show() {
  cout << endl;
}

void LongLong::setSign() {
  if (high < 0) {
    high -= 1;
  } else {
    high += 1;
  }
}

int LongLong::getSign() {
  if (high < 0) {
    high += 1;
  }
  else {
    high -= 1;
  }
  return high;
}