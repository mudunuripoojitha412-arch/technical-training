#include <stdio.h>

int sentinelSearch(int arr[], int n, int key) {
    int last = arr[n - 1];
    arr[n - 1] = key;  // Set sentinel

    int i = 0;
    while(arr[i] != key)
        i++;

    arr[n - 1] = last; // Restore last element

    if(i < n - 1 || arr[n - 1] == key)
        return i; // Found
    else
        return -1; // Not found
}

int main() {
    int arr[50], n, key, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = sentinelSearch(arr, n, key);

    if(pos != -1)
        printf("Element %d found at position %d\n", key, pos + 1);
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}

