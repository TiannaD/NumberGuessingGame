#include <iostream>
#include <random>

using namespace std;

//This program generates a random number and asks the user to guess it correctly.

int main() {

	const int MIN = 1;
	const int MAX = 10;

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(MIN, MAX);

	int randomNumber = distrib(gen);

	//Debug ling
	cout << "Guess a number 1-10" << endl << "Correct number: " << randomNumber << endl;
	//cout << "Guess a number 1-10" << endl;

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

	}

	if (userGuess == randomNumber) {
		count++;
		cout << "You guessed it right!" << endl << "Total guesses: " << count << endl;
	}

	return 0;
}