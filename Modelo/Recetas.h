/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:       Recetas
Responsabilidades:        

  - Representar las recetas de cada pan de la panaderia. Debe tener un nombre,
    cantidad de ingredientes, ingredientes de la receta y cantidad a gastar de 
    cada ingrediente.

Colaboradores:   

    - Usa objetos de la clase Ingredientes.

===============================================================================
*/

#ifndef RECETAS_H
#define RECETAS_H

#include "Ingredientes.h"
#include <string>
#include <map>


class Recetas{

    private:
        std::string nombre;
        int numeroIngredientes;
        std::map<Ingredientes, double> ingredientesReceta;

    public:
        Recetas();  //Constructor de la clase

        //Getters de la clase
        std::string getNombre() const;
        int getNumeroIngredientes() const;
        std::map<Ingredientes, double>& getIngredientesReceta();

        //Setters de la clase
        void setNombre(const std::string& nombre);
};
#endif // RECETAS_H