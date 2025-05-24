//
// Created by Admin on 5/21/2025.
// Latest update on 5/23/2025.
//
#include "rng.h"

int randomSeed;
int randomNumber;
int initialRandomNumber;
int newRandomNumber;


using namespace std;

void rng::generateRandomNumber(int randomSeed) {
    // Seed the random generator
    random_device rd;
    mt19937 gen(randomSeed);
    // define the distribution and generate a random number
    uniform_int_distribution<> distribution(1,100);
    initialRandomNumber = distribution(gen);
    randomNumber = sqrt(initialRandomNumber * (randomSeed / 9500) + 120);

}

int rng::getRandomNumber() {
    return randomNumber;
}

void rng::setRandomNumber() {
    randomNumber = newRandomNumber;
}

void rng::generateRandomNumberWithoutrandomSeed(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distribution(1,4755);
    randomNumber = distribution(gen);
}



