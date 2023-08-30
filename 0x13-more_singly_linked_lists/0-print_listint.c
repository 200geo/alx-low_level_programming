#include <stdio.h>
#include <stddef.h> // for size_t

// Define the structure for the linked list node
typedef struct listint_t {
    int data;
    struct listint_t *next;
} listint_t;

// Function to print the elements of the linked list
size_t print_listint(const listint_t *h) {
    size_t count = 0; // Counter to keep track of the number of nodes

    // Traverse the linked list and print each element
    while (h != NULL) {
        printf("%d\n", h->data);
        h = h->next;
        count++;
    }

    return count; // Return the number of nodes
}

int main() {
    // Create some linked list nodes for demonstration
    listint_t node1 = {10, NULL};
    listint_t node2 = {20, NULL};
    listint_t node3 = {30, NULL};

    // Link the nodes together
    node1.next = &node2;
    node2.next = &node3;

    // Call the print_listint function to print the elements
    size_t nodeCount = print_listint(&node1);

    printf("Number of nodes: %zu\n", nodeCount);

    return 0;
}
