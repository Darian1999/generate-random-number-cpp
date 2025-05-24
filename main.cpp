#include <iostream>
#include <cstring> 
#include "randomnumbergenerator/rng.h"
#include "generaterandomseed/randomSeedGenerator.h"

int main(int argc, char *argv[]) {
    // local variables
    int i = 0;
    bool foundNoRandomSeed = false;
    // Such a well-optimized for() loop
    for (i; i < argc; ++i){ 
        // Define the trigger arguments
        const char * triggerargument = "-noRandomSeed";
        const char * triggerargument2 = "-nRS";
        // Check if the trigger argument is in the arguments list
        if ((strcmp(argv[i], triggerargument) == 0 || strcmp(argv[i], triggerargument2) == 0)){
            foundNoRandomSeed = true;
            break;
        }
    }
    if (foundNoRandomSeed){
        rng obj;
        obj.generateRandomNumberWithoutrandomSeed();
        std::cout << "DEBUG: no Random Seed argument detected! not using random seed!" << std::endl;
        std::cout << "Generated random number: " << obj.getRandomNumber() << std::endl;
    } else {
        rng obj1;
        randomSeedGenerator obj2;
        std::cout << "DEBUG: no arguments detected! using random seed" << std::endl;
        obj2.generateRandomSeed();
        obj1.generateRandomNumber(obj2.getRandomSeed());
        std::cout << "Generated random number: " << obj1.getRandomNumber() << std::endl;
    }
    return 0; // Def exit code (Def means default)
}
