//
// Created by Sebas Mac on 6/2/24.
//

#ifndef DATA_VECTORPRODUCT_H
#define DATA_VECTORPRODUCT_H

#include "PhysicalProduct.h"
class VectorProduct {
private:
        int tam;
        int cant;
        PhysicalProduct** PhyProd;
    public:
    VectorProduct(int t);

    ~VectorProduct();
    bool agregarProd(PhysicalProduct& prod);
    int getCantidad();
    string getNombre();
    string mostrarTodaLaInfo();
    };

#endif //DATA_VECTORPRODUCT_H
