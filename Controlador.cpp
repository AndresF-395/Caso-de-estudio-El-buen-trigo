#include "Controlador.h"
#include "Modelo/Panadero.h"
#include "Modelo/EncargadoInventario.h"
#include "Modelo/Administrador.h"
#include <iostream>
using namespace std;

void Controlador::ejecutar(Usuario* usuario) {
    inventario.cargarInventario();
    recetas = Receta::cargarRecetas();

    bool salirMenu = false;
    int opcion;

    do {
        vista.mostrarMenu(usuario);
        cout << "\nSeleccione una opción: ";
        cin >> opcion;

        if (Panadero* p = dynamic_cast<Panadero*>(usuario)) {
            switch (opcion) {
                case 1: p->registrarReceta(recetas);
                        if (!recetas.empty()) recetas[0].guardarRecetas(recetas);
                        break;
                case 2: p->registrarProduccion(inventario, recetas); break;
                case 3: p->consultarStock(inventario); break;
                case 4: salirMenu = true; break;
                default: cout << "Opción inválida.\n"; break;
            }
        }

        else if (EncargadoInventario* e = dynamic_cast<EncargadoInventario*>(usuario)) {
            switch (opcion) {
                case 1: e->registrarIngrediente(inventario); break;
                case 2: e->consultarInventario(inventario); break;
                case 3: e->verAlertasReposicion(inventario); break;
                case 4: salirMenu = true; break;
                default: cout << "Opción inválida.\n"; break;
            }
        }

        else if (Administrador* a = dynamic_cast<Administrador*>(usuario)) {
            switch (opcion) {
                case 1: a->generarReporte(inventario); break;
                case 2: a->exportarReporteTxt(inventario); break;
                case 3: salirMenu = true; break;
                default: cout << "Opción inválida.\n"; break;
            }
        }

    } while (!salirMenu);

    inventario.guardarInventario();
    if (!recetas.empty()) recetas[0].guardarRecetas(recetas);
}
