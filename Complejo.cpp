#include "Complejo.hpp"
#include <string>

using namespace std;

Complejo::Complejo(int real, int imaginario) {
  this -> real = real;
  this -> imaginario = imaginario;
}

string Complejo::toString() {
  string rtn = to_string(real);
  if (imaginario >= 0) {
    rtn += " + ";
  }
  rtn += to_string(imaginario) + 'i';
  return rtn;
}

Complejo Complejo::operator+(Complejo operando){
  int realN = this -> real + operando.getR();
  int imagN = this -> imaginario + operando.getI();
  return Complejo(realN, imagN);
}

Complejo Complejo::operator*(Complejo operando) {
  int imagN = this -> real * operando.getI() + this -> imaginario * operando.getR();
  int realN = this -> real * operando.getR() + this -> imaginario * operando.getI() * (-1);
  return Complejo(realN, imagN);
}
