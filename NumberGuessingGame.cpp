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

	cout << randomNumber;

	return 0;
}