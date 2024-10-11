#include <iostream>
#include <cmath>
#include <iomanip> // to format the output
using namespace std;

class Functions {
private:
    double x, y, z, b;

public:
    Functions(double x, double y, double z, double b) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->b = b;
    }

    double func_a() {
        double a1 = x + pow(z, 3) / pow(b * b + y, 2);
        double a2 = 1 + exp(-(x - y)) + pow(abs(z), 0.34);
        return pow(x + y, 2) + a1 / a2;
    }

    double func_b() {
        double b1 = pow(abs(y - x), 2) / pow(abs(z - 1), 1.34);
        double b2 = pow(z - x, 2) / pow(sin(z), 2);
        double b3 = pow(abs(y - z), 3) / cos(pow(y, 2));
        return 1 + b1 + b2 + b3;
    }

    void setX(double newX) {
        this->x = newX;
    }
};

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double y = 1.41, z = -3.96, b = 1.0;
    double x_start = -1.0, x_end = 1.0, dx = 0.2;

    Functions functions(x_start, y, z, b);

    cout << fixed << setprecision(4);  // Formatting for four decimal places
    cout << "Таблиця значень функцiй a i b для рiзних x:" << endl;
    cout << "------------------------------------------" << endl;
    cout << "   x      |      a(x)     |      b(x)" << endl;
    cout << "------------------------------------------" << endl;

    for (double x = x_start; x <= x_end; x += dx) {
        functions.setX(x);
        double a_value = functions.func_a();
        double b_value = functions.func_b();

        cout << setw(8) << x << " | " << setw(12) << a_value << " | " << setw(12) << b_value << endl;
    }

    return 0;
}