#ifndef TIENDAS_H_INCLUDED
#define TIENDAS_H_INCLUDED

class Tiendas
{

private:

    int	_Nro_Tienda;
    char _Nom_Tienda[50];
    char _Ubicacion_Tienda [50];

public:
    Tiendas ();
    Tiendas (int Nro_Tienda, char* Nom_tienda, char* Ubicacion_Tienda );

    void set_Nro_Tienda ( int Nro_Tienda);
    void set_Nom_Tienda (char* Nom_Tienda );
    void set_Ubicacion_Tienda (char* Ubicacion_Tienda);

    int get_Nro_Tienda ( );
    char* get_Nom_Tienda ( );
    char* get_Ubicacion_Tienda ( );

};








#endif // TIENDAS_H_INCLUDED
