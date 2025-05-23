#include <iostream>
#include "Tiendas.h"
using namespace std;
#include <cstring>

Tiendas:: Tiendas (){}
Tiendas:: Tiendas (int Nro_Tienda, char* Nom_tienda, char* Ubicacion_Tienda ){}



    void Tiendas:: set_Nro_Tienda ( int Nro_Tienda){

     Nro_Tienda = _Nro_Tienda;

    }
    void Tiendas::  set_Nom_Tienda (char* Nom_Tienda ){

    strcpy (_Nom_Tienda, Nom_Tienda);

    }
    void Tiendas::  set_Ubicacion_Tienda (char* Ubicacion_Tienda){

    strcpy (_Ubicacion_Tienda,Ubicacion_Tienda);

    }

    int  Tiendas::  get_Nro_Tienda ( ){

    return _Nro_Tienda;

    }
    char* Tiendas::  get_Nom_Tienda ( ){

    return _Nom_Tienda;

    }
    char* Tiendas::  get_Ubicacion_Tienda ( ){

    return _Ubicacion_Tienda;

    }
