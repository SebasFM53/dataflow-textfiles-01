//
// Created by Sebas Mac on 6/2/24.
//

#include "VectorProduct.h"

VectorProduct::VectorProduct(int t) {
    cant = 0;
    tam = t;
    PhyProd = new PhysicalProduct * [tam];
    for (int i = 0; i < tam; i++)
        PhyProd[i] = nullptr;
}

VectorProduct::~VectorProduct() {
    for (int i = 0; i < cant; i++)
        delete PhyProd[i];
    delete[] PhyProd;
}

bool VectorProduct::agregarProd(PhysicalProduct &prod) {
    if (cant < tam) {
        PhyProd[cant] = (PhysicalProduct*)&prod;
        cant++;
        return true;
    }
    else
        return false;
}

int VectorProduct::getCantidad() {
    return cant;
}



string VectorProduct::mostrarTodaLaInfo() {
    cout<<"nombre,peso,precio"<<endl;
    for (int i = 0; i < cant; ++i) {
        cout<<PhyProd[i]->getName()<<","
        <<PhyProd[i]->getWeight()<<","
        <<PhyProd[i]->getPrice()<<","<<endl;
    }
}
