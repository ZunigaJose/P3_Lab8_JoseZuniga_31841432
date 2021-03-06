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
  cout << "1. Ingresar vector\n2. Listar vectores\n3. Operar vectores\n0. Salir: ";
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

Vector<Complejo> nComplejo () {
  int r1, r2, r3, i1, i2, i3;
  cout << "Ingrese el real para x: ";
  cin >> r1;
  cout << "Ingrese el imaginario para x: ";
  cin >> i1;
  cout << "Ingrese el real para y: ";
  cin >> r2;
  cout << "Ingrese el imaginario para y: ";
  cin >> i2;
  cout << "Ingrese el real para z: ";
  cin >> r3;
  cout << "Ingrese el imaginario para z: ";
  cin >> i3;
  return Vector<Complejo> (Complejo(r1, i1),Complejo(r2, i2), Complejo(r3, i3));
}


Vector<Racional> nRacional () {
  int n1, n2, n3, d1, d2, d3;
  cout << "Ingrese el numerador para x: ";
  cin >> n1;
  cout << "Ingrese el denominador para x: ";
  cin >> d1;
  cout << "Ingrese el numerador para y: ";
  cin >> n2;
  cout << "Ingrese el denominador para y: ";
  cin >> d2;
  cout << "Ingrese el numerador para z: ";
  cin >> n3;
  cout << "Ingrese el denominador para z: ";
  cin >> d3;
  return Vector<Racional> (Racional(n1, d1), Racional(n2, d2), Racional(n3, d3));
}

void agregar(){
  switch (tipo()) {
    case 1:
      racionales.push_back(nRacional());
    break;
    case 2:
      complejos.push_back(nComplejo());
  }
}

void suma() {
  int op1, op2;
  switch (tipo()) {
    case 1:
      if(racionales.empty()) {
        cout << "Racionales esta vacio y no se puede hacer!!!\n\a";
        return;
      }
      lRacional();
      cin >> op1;
      while (op1 < 0 || op1 > racionales.size()) {
        cout << "Valores invalidos!!\nVualva a intentar:\a\n";
        cin >> op1;
      }
      lRacional();
      cin >> op2;
      while (op2 < 0 || op2 > racionales.size()) {
        cout << "Valores invalidos!!\nVuelva a intentar:\a\n";
        cin >> op2;
      }
      racionales.push_back(racionales[op1] + racionales[op2]);
      cout << racionales[op1].toString() << " + " <<
      racionales[op2].toString() << " = " << racionales[racionales.size() - 1].toString() << endl;
    break;
    case 2:
      if(complejos.empty()) {
        cout << "Complejos esta vacio y no se puede hacer!!!\n\a";
        return;
      }
      lComplejos();
      cin >> op1;
      while (op1 < 0 || op1 > complejos.size()) {
        cout << "Valores invalidos!!\nVualva a intentar:\a\n";
        cin >> op1;
      }
      lComplejos();
      cin >> op2;
      while (op2 < 0 || op2 > complejos.size()) {
        cout << "Valores invalidos!!\nVuelva a intentar:\a\n";
        cin >> op2;
      }
      complejos.push_back(complejos[op1] + complejos[op2]);
      cout << complejos[op1].toString() << " + " <<
      complejos[op2].toString() << " = " << complejos[complejos.size() - 1].toString() << endl;
    break;
  }
}

void multi() {
  int op1, op2;
  switch (tipo()) {
    case 1:
    if(racionales.empty()) {
      cout << "Racionales esta vacio y no se puede hacer!!!\n\a";
      return;
    }
    lRacional();
    cin >> op1;
    while (op1 < 0 || op1 > racionales.size()) {
      cout << "Valores invalidos!!\nVualva a intentar:\a\n";
      cin >> op1;
    }
    lRacional();
    cin >> op2;
    while (op2 < 0 || op2 > racionales.size()) {
      cout << "Valores invalidos!!\nVuelva a intentar:\a\n";
      cin >> op2;
    }
    racionales.push_back(racionales[op1] * racionales[op2]);
    cout << racionales[op1].toString() << " * " <<
    racionales[op2].toString() << " = " << racionales[racionales.size() - 1].toString() << endl;
    break;
    case 2:
    if(complejos.empty()) {
      cout << "Complejos esta vacio y no se puede hacer!!!\n\a";
      return;
    }
    lComplejos();
    cin >> op1;
    while (op1 < 0 || op1 > complejos.size()) {
      cout << "Valores invalidos!!\nVualva a intentar:\a\n";
      cin >> op1;
    }
    lComplejos();
    cin >> op2;
    while (op2 < 0 || op2 > complejos.size()) {
      cout << "Valores invalidos!!\nVuelva a intentar:\a\n";
      cin >> op2;
    }
    complejos.push_back(complejos[op1] * complejos[op2]);
    cout << complejos[op1].toString() << " * " <<
    complejos[op2].toString() << " = " << complejos[complejos.size() - 1].toString() << endl;
    break;
  }
}

int operacion() {
  int op;
  cout << "1. Suma\n2. Multiplicacion: ";
  cin >> op;
  if (op < 1 || op > 2) {
    cout << "Entrada Invalida!!\nVuelva a Intentar!!\n";
    return operacion();
  }
  return op;
}

void operar() {
  switch(operacion()) {
    case 1:
      suma();
    break;
    case 2:
      multi();
    break;
  }
}

int main() {
  int op;
  do {
    op = menuP();
    switch (op) {
      case 1:
        agregar();
      break;
      case 2:
        lComplejos();
        lRacional();
      break;
      case 3:
        operar();
      break;
    }
  } while (op);
  return 0;
}
