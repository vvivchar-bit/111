// Task 1: Perimeter of a square given its area
#include <iostream>
#include <cmath>
#include <limits>

int main() {
    std::cout << "Enter square area S: ";
    double S;
    if (!(std::cin >> S)) return 0;

    if (S < 0) {
        std::cout << "Error: area must be non-negative.\n";
        return 0;
    }

    double a = std::sqrt(S);
    double P = 4.0 * a;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(6);
    std::cout << "Side = " << a << "\nPerimeter = " << P << "\n";
    return 0;
}
