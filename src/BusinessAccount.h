//
// Created by Maikol Guzman Alan on 5/14/22.
//

#ifndef DP_CREATIONAL_FACTORY_BUSINESSACCOUNT_H
#define DP_CREATIONAL_FACTORY_BUSINESSACCOUNT_H


#include "IBankAccount.h"

/**
 * Concrete Business Account provide various implementations of the Bank Account interface.
 */
class BusinessAccount : public IBankAccount {
private:
    float rate;
public:
    BusinessAccount();

    BusinessAccount(float rate);

    float getRate() const;

    void setRate(float rate);

    float calculateInterestRate(int unit) const override;
};


#endif //DP_CREATIONAL_FACTORY_BUSINESSACCOUNT_H
