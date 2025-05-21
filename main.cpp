#include <iostream>

#include "randomnumbergenerator/rng.h"
#include "generaterandomseed/randomSeedGenerator.h"

int main() {
    std::cout << "Generating random seed......." << std::endl;
    randomSeedGenerator obj1;
    obj1.generateRandomSeed();
    std::cout << "DEBUG: random seed is: " << randomSeed << std::endl;
    std::cout << "generation of seed complete, generating random number.." << std::endl;
    rng obj2;
    obj2.generateRandomNumber(randomSeed);
    std::cout << "generation of random number complete: " << randomNumber << std::endl;
    return 0;
}