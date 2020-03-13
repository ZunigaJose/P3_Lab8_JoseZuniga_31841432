#include "Racional.hpp"
#include <string>
using namespace std;

Racional::Racional(int num, int den) {
  this -> num = num;
  this -> den = den;
  simplificar();
}

void Racional::simplificar() {
  int x = 2;
  while (x <= den) {
    if(den / x) {
      if (num / x) {
        den /= x;
        num /= x;
      }
    }
    x++;
  }
}

Racional Racional::operator+(Racional operando) {
  int numN = this -> num * operando.getDen() + operando.getNum() * this -> den;
  int denN = this -> den * operando.getDen();
  return Racional(numN, denN);
}

string Racional::toString() {
  string rtn;
  rtn = to_string(num);
  if (den != 1) {
    rtn += "/" + to_string(den);
  }
  return rtn;
}

Racional Racional::operator*(Racional operando) {
  int numN = this -> num * operando.getNum();
  int denN = this -> den * operando.getDen();
  return Racional(num, den);
}
