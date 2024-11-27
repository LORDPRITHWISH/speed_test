const { performance } = require('perf_hooks');

const iterations = 1000;
let result = 0.0;

const start = performance.now();

for (let i = 0; i < iterations; i++) {
    for (let j = 0; j < iterations; j++) {
        for (let k = 0; k < iterations; k++) {
            result += Math.sqrt(i * j * k + 1); // Adding 1 to avoid sqrt(0)
        }
    }
}

const end = performance.now();
const elapsedTime = (end - start) / 1000;

console.log("JavaScript Benchmark:");
console.log(`Time elapsed: ${elapsedTime.toFixed(4)} seconds`);
console.log(`Result: ${result.toFixed(2)}`);
console.log('-----------------------------------------------------')
