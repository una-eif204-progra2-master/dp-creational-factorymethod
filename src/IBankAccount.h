//
// Created by Maikol Guzman Alan on 5/14/22.
//

#ifndef MY_PROJECT_NAME_IBANKACCOUNT_H
#define MY_PROJECT_NAME_IBANKACCOUNT_H


class IBankAccount {
public:
    virtual ~IBankAccount() {}
    virtual float calculateInterestRate(int unit) const = 0;
};


#endif //MY_PROJECT_NAME_IBANKACCOUNT_H
