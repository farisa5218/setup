#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Overload the '+' operator
    Complex operator + (const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    // Add the two complex numbers
    Complex c3 = c1 + c2;

    // Display the results
    cout << "Complex number 1: ";
    c1.display();

    cout << "Complex number 2: ";
    c2.display();

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}
