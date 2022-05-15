//
// Created by Maikol Guzman Alan on 5/14/22.
//

#ifndef DP_CREATIONAL_FACTORY_BUSINESSACCOUNT_H
#define DP_CREATIONAL_FACTORY_BUSINESSACCOUNT_H


#include "IBankAccount.h"

class BusinessAccount : public IBankAccount {
private:
    float rate;
public:
    BusinessAccount();

    float getRate() const;

    void setRate(float rate);

    float calculateInterestRate(int unit) const override;
};


#endif //DP_CREATIONAL_FACTORY_BUSINESSACCOUNT_H
