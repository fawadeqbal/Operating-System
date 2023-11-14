#include <iostream>
#include <cstdlib>
#include <climits>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <number1> <number2> ... <numberN>" << std::endl;
        return 1;
    }

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 1; i < argc; i++) {
        int number = std::atoi(argv[i]);
        
        if (number < min) {
            min = number;
        }

        if (number > max) {
            max = number;
        }
    }

    std::cout << "Minimum number: " << min << std::endl;
    std::cout << "Maximum number: " << max << std::endl;

    return 0;
}
