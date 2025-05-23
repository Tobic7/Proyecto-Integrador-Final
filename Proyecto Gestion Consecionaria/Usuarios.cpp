
#include <iostream>
#include "Usuarios.h"
using namespace std;
#include <cstring>


Usuarios :: Usuarios ()
{


}

Usuarios::Usuarios (int  T_Usuario,char* N_Usuario,int Nro_Usuario,int Dni_Usuario,char* Correo_Usuario,bool Estado_Usuario)
{
    T_Usuario = _Tipo_Usuario;
    strcpy(_Nom_Usuario,N_Usuario);
    Nro_Usuario = _Nro_Usuario;
    Dni_Usuario = _Dni_Usuario;
    strcpy(_Correo_User,Correo_Usuario);
    Estado_Usuario = _Estado;
}


void Usuarios:: set_Tipo_Usuario( int T_Usuario )
{

    T_Usuario = _Tipo_Usuario;

}
void  Usuarios:: set_Nombre_Usuario ( char* N_Usuario )
{

    strcpy(_Nom_Usuario,N_Usuario);
}
void  Usuarios:: set_Nro_Usuario ( int Nro_Usuario )
{

    Nro_Usuario = _Nro_Usuario;

}
void  Usuarios:: set_Dni_Usuario ( int Dni_Usuario )
{

    Dni_Usuario = _Dni_Usuario;

}
void  Usuarios:: set_Correo_Usuario ( char* Correo_Usuario )
{

    strcpy(_Correo_User,Correo_Usuario);

}
void  Usuarios:: set_Estado ( bool Estado_Usuario )
{

    Estado_Usuario = _Estado;

}


int Usuarios:: get_Tipo_Usuario ( )
{

    return _Tipo_Usuario;

}
char* Usuarios:: get_Nombre_Usuario ( )
{

    return _Nom_Usuario;

}
int Usuarios:: get_Nro_Usuario ( )
{

    return _Nro_Usuario;

}
int Usuarios:: get_Dni_Usuario ( )
{

    return _Dni_Usuario;

}
char* Usuarios:: get_Correo_Usuario ( )
{

    return _Correo_User;

}
bool Usuarios:: get_Estado ( )
{

    return _Estado;
}
