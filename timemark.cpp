#include <iostream>
#include <cmath>
#include <chrono>

int main() {
    const int iterations = 1000;
    double result = 0.0;

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < iterations; i++) {
        for (int j = 0; j < iterations; j++) {
            for (int k = 0; k < iterations; k++) {
                result += sqrt(i * j * k + 1); // Adding 1 to avoid sqrt(0)
            }
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_time = end - start;

    std::cout << "C++ Benchmark:\n";
    std::cout << "Time elapsed: " << elapsed_time.count() << " seconds\n";
    std::cout << "Result: " << result << std::endl;
    std::cout << "---------------------------------\n";

    return 0;
}
