#include <iostream>
#include <ctime>

void RandomNumGen(int num, int guesses, int tries);

int main() {

	int ranNum;
	int guesses{};
	int tries{};


	std::cout << "*****************************************************************\n";
	std::cout << "***************Welcome To The Number Guessing Game***************\n";
	std::cout << "*****************************************************************\n";

	srand(time(NULL));
		ranNum = (rand() % 50) + 1;

		
		RandomNumGen(ranNum, guesses,tries);
			

	return 0;
}


void RandomNumGen(int ranNum, int guesses, int tries) {

	do {

		std::cout << "Enter a number between 1-50: ";
		std::cin >> guesses;
		tries++;

		if (guesses > ranNum) {
			std::cout << "High number is guessed! Try again\n";
		}

		else if (guesses < ranNum) {
			std::cout << "Lower number is guessed! Try again\n";
		}
		else {
			std::cout << "Good Job! You guessed the correct number.\n";
			std::cout << ranNum;
		}
		

	} while (guesses != ranNum);
}