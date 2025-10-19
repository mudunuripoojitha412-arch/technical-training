#include <stdio.h>

int main() {
    int arr[50], n, i, sum = 0;
    int *ptr;

    // Input number of elements
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer points to first element of array
    ptr = arr;

    // Calculate sum using pointer
    for(i = 0; i < n; i++) {
        sum += *(ptr + i);  // or sum += ptr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}

