#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <vector>
#include "Vista/Vista.h"
#include "Modelo/Inventario.h"
#include "Modelo/Receta.h"
#include "Modelo/Usuario.h"

class Controlador {
private:
    Vista vista;
    Inventario inventario;
    std::vector<Receta> recetas;

public:
    void ejecutar(Usuario* usuario);
};

#endif
