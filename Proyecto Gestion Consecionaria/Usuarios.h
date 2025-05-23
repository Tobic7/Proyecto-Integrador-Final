#ifndef USUARIOS_H_INCLUDED
#define USUARIOS_H_INCLUDED


class Usuarios
{
private:
    int	    _Tipo_Usuario;
    char	_Nom_Usuario [50];
    int	    _Nro_Usuario;
    int	    _Dni_Usuario;
    char	_Correo_User[50];
    bool	_Estado;



public:

    Usuarios ();
    Usuarios (int _Tipo_Usuario,char* _Nom_Usuario,int _Nro_Usuario,int _Dni_Usuario,char*_Correo_User,bool	_Estado);



    void set_Tipo_Usuario( int T_Usuario );
    void set_Nombre_Usuario ( char* N_Usuario );
    void set_Nro_Usuario ( int Nro_Usuario );
    void set_Dni_Usuario ( int Dni_Usuario );
    void set_Correo_Usuario ( char* Correo_Usuario );
    void set_Estado ( bool Estado_Usuario );


    int get_Tipo_Usuario ( );
    char* get_Nombre_Usuario ( );
    int get_Nro_Usuario ( );
    int get_Dni_Usuario ( );
    char* get_Correo_Usuario ( );
    bool get_Estado ( );





};














#endif // USUARIOS_H_INCLUDED
