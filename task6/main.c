#include <stdio.h>
#include <math.h>

// Function to calculate the length of a vector given its coordinates
double calculateVectorLength(int x1, int y1, int x2, int y2) {
    // Calculate the differences in coordinates
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Calculate the squares of the differences
    int dxSquared = dx * dx;
    int dySquared = dy * dy;

    // Calculate the sum of the squares
    int sumOfSquares = dxSquared + dySquared;

    // Calculate the square root of the sum of squares to get the length
    double vectorLength = sqrt(sumOfSquares);

    return vectorLength;
}

int main() {
    int x1, y1, x2, y2;

    printf("Enter the coordinates of the vector's starting point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the vector's end point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    // Calculate the length of the vector
    double length = calculateVectorLength(x1, y1, x2, y2);

    // Print the result
    printf("The length of the vector is: %.6f\n", length);

    return 0;
}
