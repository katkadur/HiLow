#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

void intro(){
    std::cout << "Welcome to my Hi-Low Game!" << std::endl;
    std::cout << "I will pick a number between 1 and 100" << std::endl;
    std::cout << "You will get to specify how many guesses you get to guess the number" << std::endl;
    std::cout << "Here goes!!!" << std::endl;
    std::cout << "---------------------------------------------------------------------" << std::endl;
}

void game(){
    int desiredGuesses;
    srand(time(NULL));
    int randomNumber = rand() % 5;
    int userGuess;
    std::cout << "How many guesses do you want to have? (only positive numbers please)" << std::endl;
    std::cin >> desiredGuesses;
    for(int i = 1; i < desiredGuesses + 1; i++){
        std::cout << "Enter guess #" << i << std::endl;
        std::cin >> userGuess;
        if (userGuess < randomNumber){
            std::cout << "Too low..." << std::endl;
            std::cout << std::endl;
        }
        else if (userGuess > randomNumber){
            std::cout << "Too high..." << std::endl;
            std::cout << std::endl;
        }
        else if (userGuess == randomNumber){
            std::cout << "Yay!! You're right!" << std::endl;
            std::cout << std::endl;
            break;
        }
    }
    if (userGuess != randomNumber){
        std::cout << "Sorry...you didn't guess the number fast enough" << std::endl;
        std::cout << "The correct number was " << randomNumber << std::endl;
    }
}

int main(){
    intro();
    game();
    return 0;
}
