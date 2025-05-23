#ifndef VEHICULOS_H_INCLUDED
#define VEHICULOS_H_INCLUDED
class Vehiculos
{

private:

    int 	_Id_Vehiculo;
    char	_Nom_Marca [20];
    char	_Modelo_Vehiculo[30];
    char    _Nro_Cuadro [20];
    char    _Nro_Motor  [20];
    bool	_Estado_Vehiculo;
    char	_Descricion_Tecnica [100];
    int 	_Valor_Vehiculo;
    bool	_Disponibilidad;
///int | Tienda	Ubicacion_Sucursal

public:


    Vehiculos (int 	Id_Vehiculo,char* Nom_Marca,char* Modelo_Vehiculo,char* Nro_Cuadro,char* Nro_Motor,bool	Estado_Vehiculo,char* Descricion_Tecnica,int Valor,bool Disponibilidad);
    Vehiculos ( );




    void set_Id_Vehiculo ( int 	Id_Vehiculo  );
    void set_Nom_Marca ( char*	Nom_Marca );
    void set_Modelo_Vehiculo ( char*	Modelo_Vehiculo);
    void set_Nro_Cuadro (char* Nro_Cuadro);
    void set_Nro_Motor (char* Nro_Motor);
    void set_Estado_Vehiculo ( bool	Estado_Vehiculo );
    void set_Descripcion_Tecnica ( char* Descricion_Tecnica  );
    void set_Valor_Vehiculo (int Valor  );
    void set_Disponibilidad (bool Disponibilidad );


    int get_Id_Vehiculo ( );
    char* get_Nom_Marca ( );
    char* get_Modelo_Vehiculo ( );
    char* get_Nro_Cuadro ( );
    char* get_Nro_Motor ();

    bool get_Estado_Vehiculo ( );
    char* get_Descripcion_Tecnica ( );
    int get_Valor_Vehiculo ( );
    bool get_Disponibilidad ( );


};



#endif // VEHICULOS_H_INCLUDED
