#include <iostream>
#ifndef EJTIPOPA_MATERIAL_H
#define EJTIPOPA_MATERIAL_H

using namespace std;
class Material {
private:
    string nombre;
    int codigo;
    float cantActual;
    float cantMin;
    float cantMax;
    float diferencia;


public:
    void setNombre(string _nombre);
    void setCodigo(int _codigo);
    void setCantiActual(float _cantActual);
    void setCantMin(float _cantMin);
    void setCantMax(float _cantMax);
    void setDiferencia (float _diferencia);


    string getNombre ();
    int getCodigo();
    float getCantActual();
    float getCantMin();
    float getCantMax();
    float getDiferencia();


    void aumentar(float _cantActual, float _diferencia, float _cantMax);
    void disminuir(float _cantActual, float _diferencia);
    void impresion ();

    //constructores
    Material();
    Material(string _nombre, int _codigo, float _cantActual, float _cantMin, float _cantMax, float _diferencia);
};


#endif //EJTIPOPA_MATERIAL_H
