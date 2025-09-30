#include <iostream>
#include <random>

int main() {
	srand(time(0));

	int secretNum = rand() % 101;
	int guess = 0;
	int guesses = 0;

	while (guess != secretNum && guesses < 5) {
		std::cout << "Guess a number between 0-100: ";
		std::cin >> guess;
		guesses++;
	}
	
	if (guesses == 5) {
		std::cout << "Too many guesses, you lose";
	}
	else {
		std::cout << "You win!";
	}
}