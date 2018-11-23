#include <iostream>
#include <fstream>
#include <string>
#include "Articles.h"
#include "Stock.h"

int main() {

    std::fstream warehouseFile("wh_stock.txt", std::ios::in | std::ios::out);
    //std::ifstream warehouseFile("wh_stock.txt", std::ios::in | std::ios::out);

    int aNumOfArticle; //Articles
    std::string aDescription;
    double aCostPrice;
    int aOrderDuration;
    int aArticleNumber; //Stocks
    int aActualStock;
    int aMaximumStock;
    int aConsumption;

    if (warehouseFile.is_open()) {
        std::cout << "No, Description,  ActualStock,  MaxStock,    CostPrice,   Consumption,    Order" << std::endl;
        //std::cout << "press Cmd + D to quit \n" << std::endl;

        //file headers
        warehouseFile << "No" << "," <<"Description" << "," << "ActualStock" << "," << "MaxStock" << ","  << "CostPrice" << ","
        << "Consumption" << "," << "Order" << std::endl;

        std::string line;
        getline(warehouseFile, line);

        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 8; j++) {
                while (warehouseFile >> aNumOfArticle >> aDescription >> aCostPrice >> aOrderDuration >>
                           aArticleNumber >> aActualStock >> aMaximumStock >> aConsumption){
                    warehouseFile << aNumOfArticle << aDescription << aOrderDuration <<  aArticleNumber <<  aActualStock << aMaximumStock<< aConsumption << std::endl;
                    }
                }
        }

    } else {
        std::cout << "File is not open" << std::endl;
    }

    warehouseFile.close();

    return 0;
}