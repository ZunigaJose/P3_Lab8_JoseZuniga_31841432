#include "Racional.hpp"
#include "Complejo.hpp"
#include "Vector.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<Vector<Racional>> racionales;
vector<Vector<Complejo>> complejos;

int menuP() {
  int op;
  cout << "1. Ingresar vector\n2. Listar vectores\n3. Operar vectores: ";
  cin >> op;
  if (op < 0 || op > 3) {
    return menuP();
  }
  return op;
}

int tipo() {
  int op;
  cout << "Elija El tipo:\n1. Racional\n2, Complejo: ";
  cin >> op;
  if (op < 1 || op > 2) {
    return tipo();
  }
  return op;
}

void lRacional () {
  cout << "Vectores Racionales.\n";
  for(int i = 0; i < racionales.size(); i++) {
    cout << i << ". " << racionales[i].toString() << endl;
  }
}

void lComplejos() {
  cout << "Vectores Complejos.\n";
  for(int i = 0; i < complejos.size(); i++) {
    cout << i << ". " << complejos[i].toString() << endl;
  }
}

int main() {
  int op;
  do {
    op = menuP();
    switch (op) {
      case 1:
      
      break;
    }
  } while (op);
  return 0;
}
