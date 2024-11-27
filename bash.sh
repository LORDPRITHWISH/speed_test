gcc -o benchmark timemark.c -lm
./benchmark

g++ timemark.cpp 
./a.out

python3 timemark.py

node timemark.js

echo "Running on PyPy3"
pypy3 timemark.py
echo "Done"