#pragma once
#include <string>

using namespace std;

class Complejo {
  private:
    int real;
    int imaginario;
  public:
    Complejo() {}
    Complejo(int, int);
    Complejo operator+(Complejo);
    Complejo operator*(Complejo);
    int getR() { return real; };
    int getI() { return  imaginario; };
    string toString();
};
