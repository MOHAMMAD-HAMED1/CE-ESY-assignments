#include <stdio.h>
#include <string.h>

#define SIZE 6

typedef struct {
    char data[SIZE];
    int head;
    int tail;
    int count;
} CircularBuffer;

void initBuffer(CircularBuffer *buffer) {
    buffer->head = 0;
    buffer->tail = 0;
    buffer->count = 0;
}

int isFull(CircularBuffer *buffer) {
    return buffer->count == SIZE;
}

int isEmpty(CircularBuffer *buffer) {
    return buffer->count == 0;
}

void writeBuffer(CircularBuffer *buffer, char ch) {
    if (isFull(buffer)) {
        printf("Buffer Overflow\n");
        return;
    }

    buffer->data[buffer->tail] = ch;
    buffer->tail = (buffer->tail + 1) % SIZE;
    buffer->count++;
}

char readBuffer(CircularBuffer *buffer) {
    if (isEmpty(buffer)) {
        printf("Buffer Underflow\n");
        return '\0';
    }

    char ch = buffer->data[buffer->head];
    buffer->head = (buffer->head + 1) % SIZE;
    buffer->count--;

    return ch;
}

int main() {
    CircularBuffer myBuffer;
    initBuffer(&myBuffer);

    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    strcat(name, "CE-ESY");

    for (int i = 0; i < strlen(name); i++) {
        writeBuffer(&myBuffer, name[i]);
    }

    printf("Output: ");
    while (!isEmpty(&myBuffer)) {
        printf("%c", readBuffer(&myBuffer));
    }

    printf("\n");

    if (isEmpty(&myBuffer)) {
        printf("Buffer is empty\n");
    }

    return 0;
}
