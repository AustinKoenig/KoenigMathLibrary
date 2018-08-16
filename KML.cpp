#include "KML.h"

#include <iostream>

using namespace std;


KML::KML() {
	// constructor
}

KML::~KML() {
	// deconstructor
}

double KML::ln(double a) {
	// natural log
}

double KML::log(double base, double a) {
	// log base a
}

double KML::log10(double a) {
	// log base 10
}

double KML::log2(double a) {
	// log base 2
}

double KML::exp(double a) {
	// exponential
}

double KML::pow(double a, int n) {
	// power function
	double result = 1;
	if (n == 0) {
		return 1.0;
	 }
	
	if (a < KML::tol) {
		return 0.0;
	}

	for (int i = 0; i < n; i++) {
		result *= a;
	}
	return result;
}

double KML::sin(double a) {
	// sine
}

double KML::cos(double a) {
	// cosine
}

double KML::tan(double a) {
	// tangent
}

double KML::invsin(double a) {
	// inverse sine
}

double KML::invcos(double a) {
	// inverse cosine
}

double KML::invtan(double a) {
	// inverse tangent
}

double KML::sqrt(double a) {
	// square root
	
	if (a < 0.0) {
		cout << "Error: Negative input." << endl;
		return -1.0;
	}

	double x;
	double xLast;
	double error;

	int maxGuess = (int)1E8;
	int i = 0;
	
	while (i < maxGuess) {
		if (a >= i * i && a <= (i + 1) * (i + 1)) {
			x = i + 0.5;
			break;
		}
		i++;
	}

	do {
		xLast = x;
		x = (x * x + a) / (2 * x);
		error = abs(x - xLast);
	} while (error > KML::tol);

	return x;
}

double KML::cbrt(double a) {
	// cubed root

	if (a < 0.0) {
		cout << "Error: Negative input." << endl;
		return -1.0;
	}

	double x;
	double xLast;
	double error;

	int maxGuess = (int)1E8;
	int i = 0;

	while (i < maxGuess) {
		if (a >= i * i * i && a <= (i + 1) * (i + 1) * (i + 1)) {
			x = i + 0.5;
			break;
		}
		i++;
	}

	do {
		xLast = x;
		x = (2 * x * x * x + a) / (3 * x * x);
		error = abs(x - xLast);
	} while (error > KML::tol);

	return x;
}

double KML::nrt(double a, int n) {
	// nth root

	if (a < 0.0) {
		cout << "Error: Negative input." << endl;
		return -1.0;
	}

	double x;
	double xLast;
	double error;

	int maxGuess = (int)1E8;
	int i = 0;

	while (i < maxGuess) {
		if (a >= i * i && a <= (i + 1) * (i + 1)) {
			x = i + 0.5;
			break;
		}
		i++;
	}

	do {
		xLast = x;
		x = x - ((KML::pow(x, n) - a) / (n * KML::pow(x, (n - 1))));
		error = abs(x - xLast);
	} while (error > KML::tol);

	return x;
}