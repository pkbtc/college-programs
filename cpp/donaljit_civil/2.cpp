#include <iostream>

class Fibonacci {
private:
    int a, b;

public:
    Fibonacci() : a(0), b(1) {}

    // Copy constructor
    Fibonacci(const Fibonacci &fib) : a(fib.a), b(fib.b) {}

    // Generate next Fibonacci number
    int next() {
        int temp = a;
        a = b;
        b = temp + b;
        return a;
    }
};

int main() {
    int n;
    std::cout << "Enter the number of terms in the Fibonacci series: ";
    std::cin >> n;

    Fibonacci fib;
    std::cout << "Fibonacci Series: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fib.next() << " ";
    }
    std::cout << std::endl;

    return 0;
}
