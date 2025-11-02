// Task 3: Perimeter of a right triangle given legs a and b
#include <iostream>
#include <cmath>

int main() {
    std::cout << "Enter legs a and b: ";
    double a, b;
    if (!(std::cin >> a >> b)) return 0;

    if (a <= 0 || b <= 0) {
        std::cout << "Error: legs must be positive.\n";
        return 0;
    }

    double c = std::sqrt(a*a + b*b);
    double P = a + b + c;

    // Triangle inequality check (redundant for positive legs, but explicit):
    if (a + b <= c) {
        std::cout << "Triangle does not exist (triangle inequality fails).\n";
        return 0;
    }

    std::cout.setf(std::ios::fixed);
    std::cout.precision(6);
    std::cout << "Hypotenuse = " << c << "\nPerimeter = " << P << "\n";
    return 0;
}
