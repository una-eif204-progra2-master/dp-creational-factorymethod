//
// Created by Maikol Guzman Alan on 5/15/22.
//

#include "Factory.h"
#include "PersonalAccount.h"
#include "BusinessAccount.h"

IBankAccount *Factory::createBankAccount(string accountType) const {
    if(accountType == "BUSINESS") {
        return new BusinessAccount;
    }
    else if(accountType == "PERSONAL") {
        return new PersonalAccount;
    }

    return nullptr;
}

Factory::Factory() {}
