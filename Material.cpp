//
// Created by COTYS on 10/5/2023.
//
#include <iostream>
#include "Material.h"

using namespace std;

void Material::setCodigo(int _codigo) {
    codigo=_codigo;
}

int Material::getCodigo() {
    return codigo;
}

void Material::setNombre(string _nombre) {
    nombre=_nombre;
}
string Material::getNombre() {
    return nombre;
}
void Material::setCantiActual(float _cantActual) {
    cantActual=_cantActual;
}
float Material::getCantActual() {
    return cantActual;
}
void Material::setCantMax(float _cantMax){
    cantMax=_cantMax;
}
float Material::getCantMax() {
    return cantMax;
}
void Material::setCantMin(float _cantMin) {
    cantMin=_cantMin;
}
float Material::getCantMin() {
    return cantMin;
}
void Material::setDiferencia(float _diferencia) {
    diferencia=_diferencia;
}
float Material::getDiferencia() {
    return diferencia;
}

void Material::aumentar(float _cantActual, float _diferencia, float _cantMax) {
    if (_diferencia>0){
        setCantiActual(getCantActual()+_diferencia);
    } else if (_cantActual== _cantMax) {
        cout<<"Su deposito ya se encuentra en la capacidad maxima, no puede agregar materia"<<endl;
    } else if (_diferencia<0){
        cout<<"No se pueden agregar valores negativos"<<endl;
    }
    cout<<"Cantidad actual: "<<getCantActual()<<endl;
}


void Material::disminuir(float _cantActual, float _diferencia) {
if (_diferencia>_cantActual){
    cout<<"No puede sacar mas producto del existente"<<endl;
} else if(_diferencia<0){
    cout<<"El valor ingresado debe ser positivo"<<endl;
} else if (_diferencia<=_cantActual){
    setCantiActual(getCantActual()-_diferencia);
}
cout<<"Cantidad actual: "<<getCantActual()<<endl;
}
void Material::impresion() {
cout<<"Nombre: "<<getNombre()<<endl;
cout<<"Codigo: "<<getCodigo()<<endl;
cout<<"Cantidad actual: "<<getCantActual()<<endl;
cout<<"Cantidad minima: "<<getCantMin()<<endl;
cout<<"Cantidad maxima: "<<getCantMax()<<endl;
}

//constructores
Material::Material():
nombre{"amalgama"}, codigo{000}, cantActual{0}, cantMax{0}, cantMin{0}, diferencia{0} {}

Material::Material(string _nombre, int _codigo, float _cantActual, float _cantMin, float _cantMax, float _diferencia):
nombre{_nombre}, codigo{_codigo}, cantActual{_cantActual}, cantMin{_cantMin}, cantMax{_cantMax}, diferencia{_diferencia}{}