#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    const int iterations = 1000;
    double result = 0.0;
    clock_t start = clock();

    for (int i = 0; i < iterations; i++) {
        for (int j = 0; j < iterations; j++) {
            for (int k = 0; k < iterations; k++) {
                result += sqrt(i * j * k + 1); // Adding 1 to avoid sqrt(0)
            }
        }
    }

    clock_t end = clock();
    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("C Benchmark:\n");
    printf("Time elapsed: %.4f seconds\n", elapsed_time);
    printf("Result: %.2f\n", result);
    printf("---------------------------------\n");

    return 0;
}
