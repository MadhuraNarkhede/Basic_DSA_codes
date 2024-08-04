#include <iostream>
using namespace std;

// Function to check if a bit is set at a specific position
int getBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}

// Function to set a bit at a specific position
int setBit(int n, int pos) {
    return (n | (1 << pos));
}

// Function to find the unique number in an array where every element appears thrice except one
int unique(int arr[], int n) {
    int result = 0;

    // Iterate over all possible bit positions (assuming 32-bit integers)
    for (int i = 0; i < 32; i++) {
        int sum = 0;

        // Sum the bits at the current position across all numbers in the array
        for (int j = 0; j < n; j++) {
            if (getBit(arr[j], i)) {
                sum++;
            }
        }

        // If the sum is not divisible by 3, then the unique number has a set bit at this position
        if (sum % 3 != 0) {
            result = setBit(result, i);
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The unique number is: " << unique(arr, n) << endl;
    return 0;
}
