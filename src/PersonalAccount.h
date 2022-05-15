//
// Created by Maikol Guzman Alan on 5/14/22.
//

#ifndef DP_CREATIONAL_FACTORY_PERSONALACCOUNT_H
#define DP_CREATIONAL_FACTORY_PERSONALACCOUNT_H

#include <ostream>
#include <iostream>
#include "IBankAccount.h"

using namespace std;

class PersonalAccount : public IBankAccount {
private:
    float rate;
public:
    PersonalAccount();

    float getRate() const;

    void setRate(float rate);

    float calculateInterestRate(int unit) const override;
};


#endif //DP_CREATIONAL_FACTORY_PERSONALACCOUNT_H
