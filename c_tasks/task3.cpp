#include <iostream>
#include <cstdlib>

bool isPrime(int number) {
    if (number <= 1)
        return false;
    if (number <= 3)
        return true;
    if (number % 2 == 0 || number % 3 == 0)
        return false;

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    const int arraySize = 1000;
    int randomNumbers[arraySize];
    int primeCount = 0;

    for (int i = 0; i < arraySize; i++) {
        randomNumbers[i] = std::rand() % 99 + 2; // Random number between 2 and 100
        if (isPrime(randomNumbers[i])) {
            primeCount++;
        }
    }

    std::cout << "Prime Numbers in the Array: " << primeCount << std::endl;

    return 0;
}

