#include <iostream>
#include <random>

using namespace std;

int main() {

	int min = 1;
	int max = 10;

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(min, max);

	int randomNumber = distrib(gen);

	//cout << randomNumber;
	cout << "Guess a number 1-10" << endl;

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



	return 0;
}