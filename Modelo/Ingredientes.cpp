#include <Ingredientes.h>

Ingredientes::Ingredientes(){
    nombre = " ";
    unidadMedida = " ";
    stock = 0;
}

//Implementación de getters de la clase
std::string Ingredientes::getNombre() const {
    return nombre; 
}
std::string Ingredientes::getUnidadMedida() const {
    return unidadMedida; 
}
double Ingredientes::getStock() const {
    return stock; 
}

//Implementación de setters de la clase
void Ingredientes::setStock(const double stock) {
    this -> stock = stock; 
}