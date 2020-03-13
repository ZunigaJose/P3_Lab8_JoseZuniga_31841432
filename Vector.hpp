#pragma once

template <class Tipo>
class Vector {
  private:
    Tipo coor_X;
    Tipo coor_Y;
    Tipo coor_Z;
  public:
    Vector(Tipo, Tipo, Tipo);
    Tipo getX() { return  coor_X; }
    Tipo getY() { return  coor_Y; }
    Tipo getZ() { return  coor_Z; }
    Vector operator+(Vector);
    Vector operator*(Vector);
};
