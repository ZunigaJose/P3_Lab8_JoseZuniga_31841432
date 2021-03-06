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
  if (num == den) {
    num = 1;
    den = 1;
  } else {
    while (x <= den) {
      if (den % x == 0) {
        if (num % x == 0) {
          den /= x;
          num /= x;
        }
      }
      x++;
    }
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
