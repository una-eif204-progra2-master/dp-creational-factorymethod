//
// Created by Maikol Guzman Alan on 5/14/22.
//

#include "PersonalAccount.h"

PersonalAccount::PersonalAccount() {
    this->rate = 3.50;
}

float PersonalAccount::calculateInterestRate(int unit) const {
    return unit * rate;
}

float PersonalAccount::getRate() const {
    return rate;
}

void PersonalAccount::setRate(float rate) {
    PersonalAccount::rate = rate;
}
