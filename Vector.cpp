#include "Vector.hpp"

template <class Tipo>
Vector<Tipo>::Vector(Tipo coor_X, Tipo coor_Y, Tipo coor_Z) {
  this -> coor_X = coor_X;
  this -> coor_Y = coor_Y;
  this -> coor_Z = coor_Z;
}
template <class Tipo>
Vector<Tipo> Vector<Tipo>::operator+(Vector<Tipo> operando) {
  Tipo nCorX = this -> coor_X + operando.getX();
  Tipo nCorY = this -> coor_Y + operando.getY();
  Tipo nCorZ = this -> coor_Z + operando.getZ();
  return Vector(coor_X, coor_Y, coor_Z);
}

template <class Tipo>
Vector<Tipo> Vector<Tipo>::operator*(Vector<Tipo> operando) {
  Tipo nCorX = this -> coor_X * operando.getX();
  Tipo nCorY = this -> coor_Y * operando.getY();
  Tipo nCorZ = this -> coor_Z * operando.getZ();
  return Vector(coor_X, coor_Y, coor_Z);
}
