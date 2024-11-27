import math
import time

iterations = 1000
result = 0.0

start = time.time()

for i in range(iterations):
    for j in range(iterations):
        for k in range(iterations):
            result += math.sqrt(i * j * k + 1)  # Adding 1 to avoid sqrt(0)

end = time.time()
elapsed_time = end - start

print("Python Benchmark:")
print(f"Time elapsed: {elapsed_time:.4f} seconds")
print(f"Result: {result:.2f}")
