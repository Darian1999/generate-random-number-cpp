//
// Created by Admin on 5/21/2025.
//

#ifndef RNG_H
#define RNG_H

#include <random>
#include <cmath>

extern int randomSeed;
extern int randomNumber;
extern int initialRandomNumber;
extern int newRandomNumber;

class rng {
public:
    void generateRandomNumber(int randomSeed);
    int getRandomNumber();
    void setRandomNumber();
};

#endif //RNG_H
