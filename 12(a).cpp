#include <stdio.h>

extern void displayCount();
extern void modifyCount();

int main() {
    printf("Before modification:\n");
    displayCount();

    modifyCount();

    printf("After modification:\n");
    displayCount();

    return 0;
}

