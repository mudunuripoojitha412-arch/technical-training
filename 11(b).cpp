#include <stdio.h>

// Function to perform binary search in rotated sorted array
int search(int arr[], int low, int high, int key) {
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(arr[mid] == key)
        return mid;

    // If left half is sorted
    if(arr[low] <= arr[mid]) {
        if(key >= arr[low] && key <= arr[mid])
            return search(arr, low, mid - 1, key);
        else
            return search(arr, mid + 1, high, key);
    }
    // If right half is sorted
    else {
        if(key >= arr[mid] && key <= arr[high])
            return search(arr, mid + 1, high, key);
        else
            return search(arr, low, mid - 1, key);
    }
}

int main() {
    int arr[50], n, key, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of rotated sorted array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = search(arr, 0, n - 1, key);

    if(pos != -1)
        printf("Element %d found at position %d\n", key, pos + 1);
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}

