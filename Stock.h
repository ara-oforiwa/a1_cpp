//
// Created by Ulm on 11/18/18.
//
#include <iostream>
#include <string>
#include <sstream>
#ifndef ASSIGN_3_STOCK_H
#define ASSIGN_3_STOCK_H


class Stock {
public:
    int articleNumber;
    int actualStock;
    int maximumStock;
    int consumption;


    // a constructor
    Stock(int aArticleNumber, int aActualStock, int aMaximumStock, int aConsumption) {
        articleNumber = aArticleNumber;
        actualStock = aActualStock;
        maximumStock = aMaximumStock;
        consumption = aConsumption;

        std::string to_string;
    }

    // Getter functions
    int getArticleNumber () {
        return articleNumber;
    }

    int getActualStock () {
        return actualStock;
    }

    int getMaximumStock () {
        return maximumStock;
    }

    int getConsumption () {
        return consumption;
    }

    std::string to_string() {
        return std::to_string(articleNumber)
               + ',' + std::to_string(actualStock)
               + ',' + std::to_string(maximumStock)
               + ',' + std::to_string(consumption);
    };
};


#endif //ASSIGN_3_STOCK_H
