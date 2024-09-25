#include <iostream>

class Calculadora {
public:
    // Sobrecarga de funciones (polimorfismo estático)
    int suma(int a, int b) {
        return a + b;
    }
    
    int suma(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculadora calc;
    std::cout << "Suma de 2 números: " << calc.suma(5, 3) << std::endl;
    std::cout << "Suma de 3 números: " << calc.suma(5, 3, 2) << std::endl;
    return 0;
}
