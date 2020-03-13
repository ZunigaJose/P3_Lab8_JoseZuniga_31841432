#pragma once
#include <string>

using namespace std;

class Racional {
  private:
    int num, den;
    void simplificar();
    Racional operator+(Racional operando);
  public:
    Racional(int num, int den);
    int getNum() { return num; }
    int getDen() { return den; }
    string toString();
};
