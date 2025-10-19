#include <stdio.h>

void recursiveFunction(int n) {
    // static variable to track recursion depth
    static int depth = 0;

    depth++;  // increase depth at function entry

    printf("Recursion call %d: n = %d\n", depth, n);

    if(n > 1) {
        recursiveFunction(n - 1);  // recursive call
    }

    printf("Returning from recursion call %d: n = %d\n", depth, n);

    depth--;  // decrease depth on return
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    recursiveFunction(n);

    return 0;
}

