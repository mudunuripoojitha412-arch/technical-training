#include <stdio.h>

// Function to calculate average of array elements
float average(int arr[], int n) {
    int sum = 0, i;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

int main() {
    int arr[50], n, i;
    float avg;

    // Input number of elements
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to calculate average
    avg = average(arr, n);

    // Display average
    printf("Average of array elements = %.2f\n", avg);

    return 0;
}

