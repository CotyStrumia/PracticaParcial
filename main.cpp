    #include <iostream>
    #include "Material.h"

    using namespace std;

    int main() {
    string cinNombre;
    float cinCantActual, cinCantMax, cinCantMin, cinDiferencia;
    int cinCodigo, opcion;
    bool menu=true;

    cout<<"Bienvenido al deposito 1, ingrese el producto a guardar"<<endl;
    cin>>cinNombre;
    cout<<"Codigo: "<<endl;
    cin>>cinCodigo;
    cout<<"Cantidad inicial: "<<endl;
    cin>>cinCantActual;
    cout<<"Cantidad minima: "<<endl;
    cin>>cinCantMin;
    cout<<"Cantidad maxima: "<<endl;
    cin>>cinCantMax;
    Material deposito1(cinNombre, cinCodigo, cinCantActual, cinCantMin, cinCantMax, cinDiferencia);


        do  {
            cout<<"Ingrese una opcion a ejecutar: "<<endl;
            cout<<"1. Agregar material"<<endl;
            cout<<"2. Extraer material"<<endl;
            cout<<"3. Ver estado"<<endl;
            cout<<"4. Salir"<<endl;
            cin>>opcion;
            switch (opcion) {
                case 1: {
                    cout << "Ingrese la cantidad a agregar" << endl;
                    cin >> cinDiferencia;
                    deposito1.aumentar(cinCantActual, cinDiferencia, cinCantMax);
                    break;
                }
                case 2: {
                    cout << "Ingrese la cantidad a retirar" << endl;
                    cin >> cinDiferencia;
                    deposito1.disminuir(cinCantActual, cinDiferencia);
                    break;
                }
                case 3: {
                    deposito1.impresion();
                    break;
                }
                case 4:
                 menu=false;
                    break;
            }
        }while(menu==true);
    }
