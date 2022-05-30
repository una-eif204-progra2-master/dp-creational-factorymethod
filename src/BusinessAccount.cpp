//
// Created by Maikol Guzman Alan on 5/14/22.
//

#include "BusinessAccount.h"

BusinessAccount::BusinessAccount() {
    this->rate = 7.50;
}

float BusinessAccount::calculateInterestRate(int unit) const {
    return unit * rate;
}

float BusinessAccount::getRate() const {
    return rate;
}

void BusinessAccount::setRate(float rate) {
    BusinessAccount::rate = rate;
}

BusinessAccount::BusinessAccount(float rate) : rate(rate) {}
