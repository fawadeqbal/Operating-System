#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    // Create an array of size 20
    int array[20];
    int even_count = 0;
    for (int i = 0; i < 20; ++i) {
        array[i] = rand() % 100 + 1;
        if (array[i] % 2 == 0) {
            even_count++;
        }
    }
    printf("Array: ");
    for (int i = 0; i < 20; ++i) {
        printf("%d ", array[i]);
    }
    printf("\nNumber of even numbers: %d\n", even_count);
    return 0;
}
