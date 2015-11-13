#include "Matrix.hh"

int main() {
	Matrix<double> m1(3,4);
	cout << m1; // should print all zeros!!!

	Matrix<double m2(3,4);
	m1(1,1) = 5;
	m2(1,2) = 4.5;
	Matrix<double> m3 = m1 + m2;
	//	Matrix<double> m4 = m1 * m2;


	Matrix<long double> bigm(3,3);
	cout << m3;

#if 0
	// for homework:: check if two matrices are the same size.  The following code should throw an exception
	try {
		Matrix<double> m1(3,4);
		Matrix<double> m2(2,5);
		Matrix<double> m3 = m1 + m2;
	} catch (SizeMismatch e) {
		cout << e;
	}
}
