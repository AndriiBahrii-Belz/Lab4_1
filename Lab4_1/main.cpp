#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	double res = 1.0;

	cout << "N = "; cin >> N;

	//Цикл While
	int i = N;
	while (i <= 10) {
		res *= (i + 1 / pow(i, 2)) / sqrt(1 + exp(1 / i));
		i++;
	}

	cout << "While: " << res << endl;

	//do-While
	i = N;
	res = 1.0;
	do {
		res *= (i + 1 / pow(i, 2)) / sqrt(1 + exp(1 / i));
		i++;
	} while (i <= 10);

	cout << "Do-While: " << res << endl;

	//For(++)
	res = 1.0;
	for (i = N; i <= 10; i++) {
		res *= (i + 1 / pow(i, 2)) / sqrt(1 + exp(1 / i));
	}

	cout << "For(++): " << res << endl;

	//For(--)
	res = 1.0;
	for (i = 10; i >= N; i--) {
		res *= (i + 1 / pow(i, 2)) / sqrt(1 + exp(1 / i));
	}

	cout << "For(--): " << res << endl;

	return 0;
}