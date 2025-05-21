//
// Created by Admin on 5/21/2025.
//

#include "randomSeedGenerator.h"

void randomSeedGenerator::generateRandomSeed() {
    std::random_device random;
    std::mt19937 generator(random());
    std::uniform_int_distribution<> distribution(1, 2147483247);
    randomSeed = distribution(generator); // generate a random seed from 1 to the 32-bit integer limit
}

