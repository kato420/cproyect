#include "funciones.h"

int main() {
  cout << "Numero de bolas: ";
  int n;
  cin >> n;
  int v = obtenerNivel(n);
  cout << "Nivel máximo: " << v << endl;
  draw(v);
  return 0;
}
