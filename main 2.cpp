// Task 2: Area of a ring given outer radius R and inner radius r
#include <iostream>
#include <cmath>

int main() {
    std::cout << "Enter outer radius R and inner radius r: ";
    double R, r;
    if (!(std::cin >> R >> r)) return 0;

    if (R <= 0 || r < 0 || R <= r) {
        std::cout << "Error: require R > r >= 0 and R > 0.\n";
        return 0;
    }

    const double PI = std::acos(-1.0);
    double area = PI * (R*R - r*r);

    std::cout.setf(std::ios::fixed);
    std::cout.precision(6);
    std::cout << "Ring area = " << area << "\n";
    return 0;
}
