#include "Inventario.h"
#include <algorithm>

Inventario::Inventario(){
    ingredientes = {};
}

//Implementación de los métodos de gestion de ingredientes de la panaderia
void Inventario::agregarIngrediente(const Ingredientes& nuevoIngrediente)
    { ingredientes.push_back(nuevoIngrediente); }

void Inventario::eliminarIngrediente(const std::string& nombreIngrediente){
    for(int i = 0; i <= ingredientes.size(); i++){
        if(ingredientes.at(i).getNombre() == nombreIngrediente){
            ingredientes.erase(ingredientes.begin() + i);  // Revisar esta linea de codigo luego
        }
    }
}

void Inventario::editarIngrediente(const std::string& nombreIngrediente, double nuevoStock)
    { buscarIngrediente(nombreIngrediente).setStock(nuevoStock); }

Ingredientes& Inventario::buscarIngrediente(const std::string& nombreIngrediente){
    for(int i = 0; i <= ingredientes.size(); i++){
        if(ingredientes.at(i).getNombre() == nombreIngrediente){
            return ingredientes[i];
            break;
        }
    }
}