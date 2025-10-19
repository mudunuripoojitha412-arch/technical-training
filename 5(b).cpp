#include <stdio.h>

int main() {
    int arr[50], n, i, first;

    // Input size of array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store first element
    first = arr[0];

    // Shift all elements one position to the left
    for(i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Move first element to last position
    arr[n - 1] = first;

    // Display rotated array
    printf("Array after left rotation by one position:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

