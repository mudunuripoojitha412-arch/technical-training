#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to print linked list
void printList(struct Node* head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to merge two sorted linked lists
struct Node* merge(struct Node* a, struct Node* b) {
    if(a == NULL) return b;
    if(b == NULL) return a;

    struct Node* result = NULL;
    if(a->data <= b->data) {
        result = a;
        result->next = merge(a->next, b);
    } else {
        result = b;
        result->next = merge(a, b->next);
    }
    return result;
}

// Function to find the middle of linked list
struct Node* getMiddle(struct Node* head) {
    if(head == NULL) return head;

    struct Node* slow = head;
    struct Node* fast = head->next;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// Merge Sort function
void mergeSort(struct Node** headRef) {
    struct Node* head = *headRef;
    if(head == NULL || head->next == NULL)
        return;

    struct Node* middle = getMiddle(head);
    struct Node* nextOfMiddle = middle->next;
    middle->next = NULL;

    mergeSort(&head);
    mergeSort(&nextOfMiddle);

    *headRef = merge(head, nextOfMiddle);
}

int main() {
    struct Node* head = NULL;
    int n, data, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &data);
        struct Node* temp = newNode(data);
        temp->next = head;
        head = temp; // Insert at beginning
    }

    printf("Original Linked List:\n");
    printList(head);

    mergeSort(&head);

    printf("Sorted Linked List:\n");
    printList(head);

    return 0;
}

