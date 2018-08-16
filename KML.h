#ifndef KOENIGMATHLIB_KML
#define KOENIGMATHLIB_KML


using namespace std;

class KML {
public:
	double pi = 3.1415926535897932384626433832795;
	double e = 2.7182818284590452353602874713526;
	double tol = 1.0E-16; // universal tolerance for function approximations

	KML();
	~KML();

	// Logarithm
	double ln(double a);
	double log(double base, double a);
	double log10(double a);
	double log2(double a);

	// Exponential
	double exp(double a);
	double pow(double a, int n);

	// Trigonometry
	double sin(double a);
	double cos(double a);
	double tan(double a);

	double invsin(double a);
	double invcos(double a);
	double invtan(double a);

	double sqrt(double a);
	double cbrt(double a);
	double nrt(double a, int n);

	// Random

};

#endif
