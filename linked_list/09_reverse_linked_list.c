#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode* previous = NULL;
    struct ListNode* current = head;

    while (current != NULL) {

        struct ListNode* next = current->next;

        current->next = previous;

        previous = current;
        current = next;
    }

    return previous;
}

void printList(struct ListNode* head) {

    while (head != NULL) {

        printf("%d ", head->val);

        head = head->next;
    }

    printf("\n");
}

int main() {

    // Test Case 1: 1 -> 2 -> 3

    struct ListNode* first =
        malloc(sizeof(struct ListNode));

    struct ListNode* second =
        malloc(sizeof(struct ListNode));

    struct ListNode* third =
        malloc(sizeof(struct ListNode));

    first->val = 1;
    first->next = second;

    second->val = 2;
    second->next = third;

    third->val = 3;
    third->next = NULL;

    first = reverseList(first);

    printf("Test Case 1: ");
    printList(first);


    // Test Case 2: 1

    struct ListNode* one =
        malloc(sizeof(struct ListNode));

    one->val = 1;
    one->next = NULL;

    one = reverseList(one);

    printf("Test Case 2: ");
    printList(one);

    return 0;
}