#ifndef PPO_IDENTIFIABLE_H
#define PPO_IDENTIFIABLE_H
#include <iostream>

using namespace std;

class Identifiable {
    virtual string getId() = 0;
    virtual string getTyp() = 0;
};

#endif //PPO_IDENTIFIABLE_H
