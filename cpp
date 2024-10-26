#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(0)));

    
    int randomNum = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100." << std::endl;

    while (guess != randomNum) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < randomNum) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > randomNum) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number " << randomNum 
                      << " in " << attempts << " attempts." << std::endl;
        }
    }

    return 0;
}
