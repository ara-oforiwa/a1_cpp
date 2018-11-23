//
// Created by Ulm on 11/18/18.
//
#include <iostream>
#include <string>
#include <sstream>
#ifndef ASSIGN_3_ARTICLES_H
#define ASSIGN_3_ARTICLES_H


class Articles {
private:
    int numOfArticle;
    std::string description;
    double costPrice;
    int orderDuration;


public:
    // a constructor
    Articles(int aNumOfArticle, std::string aDescription, double aCostPrice, int aOrderDuration) {
        numOfArticle = aNumOfArticle;
        description = aDescription;
        costPrice = aCostPrice;
        orderDuration = aOrderDuration;

        std::string to_string;
    }

    // Getter functions
    int getNumOfArticle () {
        return numOfArticle;
    }

    std::string getDescription () {
        return description;
    }

    double getCostPrice () {
        return costPrice;
    }

    int getOrderDuration () {
        return orderDuration;
    }

    std::string to_string() {
        return std::to_string(numOfArticle)
               + ',' + (description)
               + ',' + std::to_string(costPrice)
               + ',' + std::to_string(orderDuration);
    };
};


#endif //ASSIGN_3_ARTICLES_H
