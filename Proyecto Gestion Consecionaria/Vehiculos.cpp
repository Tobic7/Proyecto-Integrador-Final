#include <iostream>
#include "Vehiculos.h"
#include <cstring>
using namespace std;


Vehiculos:: Vehiculos ( )
{
}
Vehiculos::  Vehiculos (int Id_Vehiculo,char* Nom_Marca,char* Modelo_Vehiculo,char* Nro_Cuadro,char* Nro_Motor,bool Estado_Vehiculo,char* Descricion_Tecnica,int Valor,bool Disponibilidad)
{
    Id_Vehiculo = _Id_Vehiculo;
    strcpy(_Nom_Marca,Nom_Marca);
    strcpy(_Modelo_Vehiculo,Modelo_Vehiculo);
    strcpy(_Nro_Cuadro,Nro_Cuadro);
    strcpy(_Nro_Motor,Nro_Motor);
    Estado_Vehiculo = _Estado_Vehiculo;
    strcpy(_Descricion_Tecnica,Descricion_Tecnica);
    Valor = _Valor_Vehiculo;
    Disponibilidad = _Disponibilidad;
}
void Vehiculos:: set_Id_Vehiculo ( int 	Id_Vehiculo  )
{
    Id_Vehiculo = _Id_Vehiculo;
}

void Vehiculos:: set_Nom_Marca ( char*	Nom_Marca )
{

    strcpy(_Nom_Marca,Nom_Marca);

}
void Vehiculos:: set_Modelo_Vehiculo ( char* Modelo_Vehiculo )
{

    strcpy(_Modelo_Vehiculo,Modelo_Vehiculo);

}

void Vehiculos:: set_Nro_Cuadro (char* Nro_Cuadro)
{
    strcpy(_Nro_Cuadro,Nro_Cuadro);
}
void Vehiculos:: set_Nro_Motor (char* Nro_Motor)
{

    strcpy(_Nro_Motor,Nro_Motor);

}
void Vehiculos:: set_Estado_Vehiculo ( bool	Estado_Vehiculo )
{
    Estado_Vehiculo = _Estado_Vehiculo;
}
void Vehiculos:: set_Descripcion_Tecnica ( char* Descricion_Tecnica  )
{

    strcpy(_Descricion_Tecnica,Descricion_Tecnica);

}

void Vehiculos:: set_Valor_Vehiculo (int Valor  )
{
    Valor = _Valor_Vehiculo;
}
void Vehiculos:: set_Disponibilidad (bool Disponibilidad )
{

    Disponibilidad = _Disponibilidad;

}

int   Vehiculos:: get_Id_Vehiculo ( )
{
    return _Id_Vehiculo;
}
char* Vehiculos:: get_Nom_Marca ( )
{
    return _Nom_Marca;
}
char* Vehiculos::get_Modelo_Vehiculo ( )
{

    return _Modelo_Vehiculo;

}
char* Vehiculos:: get_Nro_Cuadro ( )
{

    return _Nro_Cuadro;

}
char* Vehiculos:: get_Nro_Motor ()
{

    return _Nro_Motor;

}
bool  Vehiculos:: get_Estado_Vehiculo ( )
{

    return _Estado_Vehiculo;

}
char* Vehiculos:: get_Descripcion_Tecnica ( )
{

    return _Descricion_Tecnica;

}
int   Vehiculos:: get_Valor_Vehiculo ( )
{

    return _Valor_Vehiculo;

}
bool  Vehiculos::get_Disponibilidad ( )
{

    return _Disponibilidad;

}




