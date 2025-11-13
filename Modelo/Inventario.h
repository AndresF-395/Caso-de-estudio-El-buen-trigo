/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:       Inventario
Responsabilidades:        
    
  - Gestionar los Ingredientes de la panaderia proporcionando métodos como
    "agregarIngrediente()", "eliminarIngredientes()", etc.
      

Colaboradores:            
    
  - Contiene objetos de la clase Ingredientes.
  - Conoce objetos de la clase Recetas.

===============================================================================
*/

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Ingredientes.h"
#include "Recetas.h"
#include <vector>

class Inventario{

  private:  //Atributo de la clase
    std::vector<Ingredientes> ingredientes;

  public:  //Métodos de la clase
    Inventario();  // Constructor de la clase

    //Métodos para gestionar los ingredientes de la panaderia
    void agregarIngrediente(const Ingredientes& nuevoIngrediente);
    void eliminarIngrediente(const std::string& nombreIngrediente);
    void editarIngrediente(const std::string& nombreIngrediente, double nuevaCantidad);
    Ingredientes& buscarIngrediente(const std::string& nombreIngrediente);
};

#endif // INVENTARIO_H
