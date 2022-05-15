//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_FACTORY_IACCOUNTFACTORY_H
#define DP_CREATIONAL_FACTORY_IACCOUNTFACTORY_H
#include <ostream>
#include <iostream>
#include "IBankAccount.h"

using namespace std;

class IAccountFactory {
public:
    virtual ~IAccountFactory(){};

    virtual IBankAccount *createBankAccount(string accountType) const = 0;
};


#endif //DP_CREATIONAL_FACTORY_IACCOUNTFACTORY_H
