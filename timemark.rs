use std::time::Instant;

fn main() {
    let iterations = 1000;
    let mut result = 0.0;

    // Start the timer
    let start = Instant::now();

    // Triple nested loop
    for i in 0..iterations {
        for j in 0..iterations {
            for k in 0..iterations {
                result += ((i * j * k + 1) as f64).sqrt();
            }
        }
    }
    
    // End the timer
    let duration = start.elapsed();
    
    println!("Rust Benchmark:");
    println!("Time elapsed: {:?}", duration);
    println!("Result: {:.2}", result);
    println!("-------------------------------------------");
}
