#include <stdio.h>

int main() {
    int numbers[4];

    numbers[0] = 84;
    numbers[1] = 12;
    numbers[2] = 55;
    numbers[3] = 90;

    printf("the 3rd number from the array is %d\n", numbers[2]);

    printf("numbers 2 and 4 multiplied are %d\n", (numbers[1] * numbers[3]));

    return 0;
}
