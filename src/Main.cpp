//
// Created by Maikol Guzman Alan on 3/16/22.
//
#include <stdlib.h>
#include <time.h>
#include <stdexcept>

#include "FileManager.h"
#include "VectorProduct.h"

using namespace std;

int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

    try {
        /* initialize random seed: */
        srand (time(NULL));
        int randomNumberV1 = rand() % 500;
        int randomNumberV2 = rand() % 59 + 100;

        VectorProduct vec(10);
        PhysicalProduct physicalProduct1;
        physicalProduct1.setName("call of duty");
        physicalProduct1.setWeight(randomNumberV1);
        physicalProduct1.setPrice(randomNumberV2);
        PhysicalProduct physicalProduct2;
        physicalProduct2.setName("GTA");
        physicalProduct2.setWeight(randomNumberV1);
        physicalProduct2.setPrice(randomNumberV2);
        vec.agregarProd(physicalProduct2);
        vec.agregarProd(physicalProduct1);



        // Manager SRP
        FileManager fileManager;

        // This function will save the information of the
        // Physical Product in a file with the name games.txt
        fileManager.save(vec,  "games.csv");


        string fileTextByLine = fileManager.readByLine("games.csv");

        // This function read a text file by full content in one sentence
        string fileTextByContent = fileManager.readByContent("games.csv");

        cout << "[FILE TEXT READ BY LINE]" << endl;
        cout << fileTextByLine << endl;

        cout << "[FILE TEXT READ BY CONTENT]" << endl;
        cout << fileTextByContent << endl;
    } catch (exception& ex) {
        cerr << ex.what() << '\n' << std::endl;
    }

}