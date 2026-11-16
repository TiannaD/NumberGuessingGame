#include <iostream>
#include <random>

using namespace std;

//This program generates a random number and asks the user to guess it correctly

int main() {

	int min = 1;
	int max = 10;

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(min, max);

	int randomNumber = distrib(gen);

	cout << "Guess a number 1-10" << endl << "Correct number: " << randomNumber << endl;

	int count = 0;
	int userGuess;
	cin >> userGuess;

	while (userGuess < randomNumber || userGuess > randomNumber) {
		if (userGuess < randomNumber) {
			count++;
			cout << "Too low. Try again." << endl << "Guesses: " << count << endl;
			cin >> userGuess;
		}
		else if (userGuess > randomNumber) {
			count++;
			cout << "Too high. Try again." << endl << "Guesses: " << count << endl;
			cin >> userGuess;
		}
		else {
			count++;
		}
	}

	if (userGuess == randomNumber) {
		count++;
		cout << "You guessed it right!" << endl << "Total guesses: " << count << endl;
	}

	return 0;
}