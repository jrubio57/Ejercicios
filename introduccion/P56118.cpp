#include <iostream>
using namespace std;

int max(int valor1, int valor2) {
    if ( valor1 > valor2 ) return valor1;
    return valor2;
}

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    int z = max(x,y);
    cout << z << endl;
}