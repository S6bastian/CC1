#include <iostream>
using namespace std;


class Padre {
 public:
  int x;
  int y;
};

class Hijo : public Padre {
 public:
  int z;
  void imprimir() {
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
  }
};

int main() {
  Hijo objHijo;
  objHijo.x = 10;
  objHijo.y = 20;
  objHijo.z = 30;
  objHijo.imprimir();
  return 0;
}