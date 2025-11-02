// Task 4: Two-digit number analysis
#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "Enter a two-digit integer: ";
    int n;
    if (!(std::cin >> n)) return 0;

    int m = std::abs(n);
    if (m < 10 || m > 99) {
        std::cout << "Error: the number must be two-digit (|n| in [10, 99]).\n";
        return 0;
    }

    int tens = m / 10;
    int ones = m % 10;
    int sum = tens + ones;
    int prod = tens * ones;

    std::cout << "Tens = " << tens << "\n"
              << "Ones = " << ones << "\n"
              << "Sum = " << sum << "\n"
              << "Product = " << prod << "\n";
    return 0;
}
