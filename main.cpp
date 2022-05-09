#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;

    pila.push(-1);

    for (size_t i = 0; i < 10; i++)
    {
        pila.push(i);
    }

    cout << "tamaño: " << pila.size() << endl;
    cout << "tope: " << pila.top() << endl;

    stack<int> copia(pila);

    while (!copia.empty())
    {
        auto &e = copia.top();
        cout << e << endl;
        copia.pop();
    }

    if (!copia.empty()) {
        copia.top();
        copia.pop();
    } else {
        cout << "No puedo obtener informacion" << endl;
    }
    
    cout << "tamaño: " << pila.size() << endl;
    cout << "tope: " << pila.top() << endl;
    

    return 0;
}