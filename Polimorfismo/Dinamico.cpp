#include <iostream>

class Animal {
public:
    // Función virtual para polimorfismo dinámico
    virtual void sonido() {
        std::cout << "Sonido genérico de animal" << std::endl;
    }

    // Destructor virtual para asegurar la correcta destrucción de objetos derivados
    virtual ~Animal() = default;
};

class Perro : public Animal {
public:
    void sonido() override {
        std::cout << "Ladrido" << std::endl;
    }
};

int main() {
    Animal* animal = new Perro();
    animal->sonido(); // Llama a "Ladrido" en tiempo de ejecución (polimorfismo dinámico)
    delete animal;
    return 0;
}