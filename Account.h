//
// Created by christopher.lebeau on 2/7/2019.
//

#ifndef CHRISTOPHER_LEBEAU_ACCOUNT_H
#define CHRISTOPHER_LEBEAU_ACCOUNT_H

#endif //CHRISTOPHER_LEBEAU_ACCOUNT_H

#include <string>

class Account {
public:

    void setName(std::string accountName) {
        name = accountName;
    }

    std::string getName() const {
        return name;
    }
private:
    std::string name;
};