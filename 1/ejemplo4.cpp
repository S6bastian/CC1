#include <iostream>

using namespace std;

int main() {
    /*
        '' para caracteres
        " " para cadenas
    */
    char val ='a';
    cout<<sizeof(val)<<endl;

    int valor = static_cast<int>(val);
    cout<<valor<<endl;
    return 0;
}