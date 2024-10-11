#pragma once
using namespace std;
ref class ZavdClass
{
	double a, b;
public:
	ZavdClass() { a = 1; b = 1; } // Parameterized constructor
	void Fn_b(double x, double y, double z); // Calculation of the function b[x,y,z]
	void Fn_a(double x, double y, double z);
	double geta() { return a; }
	double getb() { return b; }
};

