#pragma once
#include <string>

using namespace std;

template <class Tipo>
class Vector {
  private:
    Tipo coor_X;
    Tipo coor_Y;
    Tipo coor_Z;
  public:
    Vector(Tipo coor_X, Tipo coor_Y, Tipo coor_Z) {
      this -> coor_X = coor_X;
      this -> coor_Y = coor_Y;
      this -> coor_Z = coor_Z;
    }
    Tipo getX() { return  coor_X; }
    Tipo getY() { return  coor_Y; }
    Tipo getZ() { return  coor_Z; }
    Vector<Tipo> operator*(Vector<Tipo> operando) {
      Tipo nCorX = this -> coor_X * operando.getX();
      Tipo nCorY = this -> coor_Y * operando.getY();
      Tipo nCorZ = this -> coor_Z * operando.getZ();
      return Vector(nCorX, nCorY, nCorZ);
    }
    Vector<Tipo> operator+(Vector<Tipo> operando) {
      Tipo nCorX = this -> coor_X + operando.getX();
      Tipo nCorY = this -> coor_Y + operando.getY();
      Tipo nCorZ = this -> coor_Z + operando.getZ();
      return Vector(nCorX, nCorY, nCorZ);
    }

    //
    string toString(){
      string rtn="";
      rtn = '[' + coor_X.toString() + ", " + coor_Y.toString() + ", " + coor_Z.toString() + ']';
      return rtn;
    };
};
