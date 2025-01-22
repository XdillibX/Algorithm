#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
    int data;
    struct NODE* next;
} Node;

typedef struct QUEUE {
    Node* head;
    Node* tail;
    int cnt;
} Qu;

Qu queue = {NULL, NULL, 0};

Node* insertNode(int n) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = n;
    newNode->next = NULL;
    return newNode;
}


void push(int n) {
    Node* newNode = insertNode(n);
    
    if (queue.head == NULL) {
        queue.head = newNode;
        queue.tail = newNode;
        queue.cnt = 1;
    }
    else {
        queue.tail->next = newNode;
        queue.tail = queue.tail->next;
        queue.cnt++;
    }
}

void pop(void) {
    if (queue.cnt == 0) {
        puts("-1");
    }
    else {
        Node* tmp = queue.head->next;
        printf("%d\n", queue.head->data);
        free(queue.head);
        queue.head = tmp;
        if (queue.head == NULL) {
            queue.tail = NULL;
        }
        queue.cnt--;
    }
}

void size(void) {
    printf("%d\n", queue.cnt);
}

void empty(void) {
    if (queue.cnt == 0) {
        puts("1");
    }
    else {
        puts("0");
    }
}

void front(void) {
    if (queue.cnt == 0) {
        puts("-1");
    }
    else {
        printf("%d\n", queue.head->data);
    }
}

void back(void) {
    if (queue.cnt == 0) {
        puts("-1");
    }
    else {
        printf("%d\n", queue.tail->data);
    }
}

int main(void) {
    int N;
    int n;
    char mode[6];
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%s", mode);
        if (strcmp(mode, "push") == 0) {
            scanf("%d", &n);
            push(n);
        }
        else {
            if (strcmp(mode, "pop") == 0) pop();
            else if (strcmp(mode, "size") == 0) size();
            else if (strcmp(mode, "empty") == 0) empty();
            else if (strcmp(mode, "front") == 0) front();
            else if (strcmp(mode, "back") == 0) back();
        }
    }
    
    while (queue.head != NULL) {
        Node* tmp = queue.head;
        queue.head = queue.head->next;
        free(tmp);
    }
    
    return 0;
}
