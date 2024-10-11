#include "pch.h"
#include "ZavdClass.h"
#include "Math.h"  
using namespace std;
// Calculation of the function b[x,y,z]
void ZavdClass::Fn_b(double x, double y, double z)
{
	double b1 = pow(fabs(y - x), 2) / pow(fabs(z - 1), 1.34);
	double b2 = pow(z - x, 2) / pow(sin(z), 2);
	double b3 = pow(fabs(y - z), 3) / cos(pow(y, 2));
	b=1 + b1 + b2 + b3;
}
// Calculation of the function b[x,y,z] x,y,z]
void ZavdClass::Fn_a(double x, double y, double z)
{
	double a1 = x + pow(z, 3) / pow(b * b + y, 2);
	double a2 = 1 + exp(-(x - y)) + pow(fabs(z), 0.34);
	a=pow(x + y, 2) + a1 / a2;
	
}


