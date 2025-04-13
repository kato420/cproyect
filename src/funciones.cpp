#include "funciones.h"

int sumatoria(int n) { return n * (n + 1) / 2; }

int obtenerNivel(int n) {
  int count = 0;
  int i;
  for (i = 1;; i++) {
    count += sumatoria(i);
    cout << "Nivel " << i << ": " << endl;
    cout << "Suma acumulada: " << count << endl;
    if (count > n) {
      break;
    }
  }
  return i - 1;
}
// Esta funcion obtiene el nivel máximo de la pirámide

void draw(int n) {
  for (int i = 0; i < n; i++) {
    int suma = sumatoria(i + 1);
    // Estrellas (sumatoria de i+1)
    for (int j = 0; j < suma; j++) {
      cout << "* ";
    }
    cout << "-> " << suma << endl;
    cout << endl;
  }
}
// Esta funcion dibuja la pirámide
void nueva() { cout << "Hola amigo" << endl; }
