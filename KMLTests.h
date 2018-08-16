#ifndef KOENIGMATHLIB_KMLTESTS
#define KOENIGMATHLIB_KMLTESTS
#include <string>

using namespace std;


class KMLTests {
public:
	KMLTests() {
		// constructor
	}

	~KMLTests() {
		// deconstructor
	}

	// Logarithm
	string test_ln(double a);
	string test_log(double base, double a);
	string test_log10(double a);
	string test_log2(double a);

	// Exponential
	string test_exp(double a);
	string test_pow(double a, int n);

	// Trigonometry
	string test_sin(double a);
	string test_cos(double a);
	string test_tan(double a);

	string test_invsin(double a);
	string test_invcos(double a);
	string test_invtan(double a);

	string test_sqrt(double a);
	string test_cbrt(double a);
	string test_nrt(double a, int n);

	void runTests();
};

#endif

