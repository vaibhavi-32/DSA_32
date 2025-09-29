//1 : : Linear Queue using Array

#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1) {
        printf("Overflow\n");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = val;
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Underflow\n");
        return;
    }
    front++;
}

void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Front: %d\n", queue[front]);
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    peek();
    display();
    return 0;
}




//2 : Queue using Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
    if (rear == NULL) {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue() {
    if (front == NULL) {
        printf("Underflow\n");
        return;
    }
    struct Node* temp = front;
    front = front->next;
    if (front == NULL) rear = NULL;
    free(temp);
}

void peek() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Front: %d\n", front->data);
}

void display() {
    struct Node* temp = front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    peek();
    display();
    return 0;
}

// 3 : Circular Queue using Array

#include <stdio.h>
#define MAX 5

int cq[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if ((rear + 1) % MAX == front) {
        printf("Overflow\n");
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % MAX;
    cq[rear] = val;
}

void dequeue() {
    if (front == -1) {
        printf("Underflow\n");
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    int i = front;
    while (1) {
        printf("%d ", cq[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    display();
    return 0;
}


// 4 : Double-Ended Queue (Deque)


#include <stdio.h>
#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

void insertFront(int val) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Overflow\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = MAX - 1;
    } else {
        front--;
    }
    deque[front] = val;
}

void insertRear(int val) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Overflow\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = val;
}

void deleteFront() {
    if (front == -1) {
        printf("Underflow\n");
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
}

void deleteRear() {
    if (rear == -1) {
        printf("Underflow\n");
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear--;
    }
}

void display() {
    if (front == -1) {
        printf("Deque is empty\n");
        return;
    }
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    display();
    deleteFront();
    deleteRear();
    display();
    return 0;
}


// 5 : Priority Queue using Array


#include <stdio.h>
#define MAX 5

struct Element {
    int data;
    int priority;
};

struct Element pq[MAX];
int size = 0;

void enqueue(int data, int priority) {
    if (size == MAX) {
        printf("Overflow\n");
        return;
    }
    pq[size].data = data;
    pq[size].priority = priority;
    size++;
}

void dequeue() {
    if (size == 0) {
        printf("Underflow\n");
        return;
    }
    int highest = 0;
    for (int i = 1; i < size; i++) {
        if (pq[i].priority > pq[highest].priority)
            highest = i;
    }
    printf("Dequeued: %d\n", pq[highest].data);
    for (int i = highest; i < size - 1; i++)
        pq[i] = pq[i + 1];
    size--;
}

void peek() {
    if (size == 0) {
        printf("Queue is empty\n");
        return;
    }
    int highest = 0;
    for (int i = 1; i < size; i++) {
        if (pq[i].priority > pq[highest].priority)
            highest = i;
    }
    printf("Peek: %d\n", pq[highest].data);
}

void display() {
    for (int i = 0; i < size; i++)
        printf("%d(%d) ", pq[i].data, pq[i].priority);
    printf("\n");
}

int main() {
    enqueue(10, 2);
    enqueue(20, 1);
    enqueue(30, 3);
    display();
    peek();
    dequeue();
    display();
    return 0;
}


//  6 : Queue using Two Stacks

#include <stdio.h>
#define MAX 5

int s1[MAX], s2[MAX];
int top1 = -1, top2 = -1;

void push1(int val) {
    if (top1 == MAX - 1) return;
    s1[++top1] = val;
}

int pop1() {
    if (top1 == -1) return -1;
    return s1[top1--];
}

void push2(int val) {
    if (top2 == MAX - 1) return;
    s2[++top2] = val;
}

int pop2() {
    if (top2 == -1) return -1;
    return s2[top2--];
}

void enqueue(int val) {
    while (top1 != -1)
        push2(pop1());
    push1(val);
    while (top2 != -1)
        push1(pop2());
}

void dequeue() {
    if (top1 == -1) {
        printf("Underflow\n");
        return;
    }
    printf("Dequeued: %d\n", pop1());
}

void display() {
    for (int i = 0; i <= top1; i++)
        printf("%d ", s1[i]);
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}


//  7 : Stack using Two Queues

#include <stdio.h>
#define MAX 5

int q1[MAX], q2[MAX];
int front1 = -1, rear1 = -1;
int front2 = -1, rear2 = -1;

void enqueue1(int val) {
    if (rear1 == MAX - 1) return;
    if (front1 == -1) front1 = 0;
    q1[++rear1] = val;
}

int dequeue1() {
    if (front1 == -1 || front1 > rear1) return -1;
    return q1[front1++];
}

void enqueue2(int val) {
    if (rear2 == MAX - 1) return;
    if (front2 == -1) front2 = 0;
    q2[++rear2] = val;
}

int dequeue2() {
    if (front2 == -1 || front2 > rear2) return -1;
    return q2[front2++];
}

void push(int val) {
    enqueue2(val);
    while (front1 <= rear1)
        enqueue2(dequeue1());
    int temp;
    temp = front1; front1 = front2; front2 = temp;
    temp = rear1; rear1 = rear2; rear2 = temp;
}

void pop() {
    if (front1 > rear1 || front1 == -1) {
        printf("Underflow\n");
        return;
    }
    printf("Popped: %d\n", dequeue1());
}

void display() {
    for (int i = front1; i <= rear1; i++)
        printf("%d ", q1[i]);
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}


// 8 : Multiple Queues in a Single Array


#include <stdio.h>
#define MAX 10

int arr[MAX];
int front1 = -1, rear1 = -1;
int front2 = MAX, rear2 = MAX;

void enqueue1(int val) {
    if (rear1 + 1 == rear2) {
        printf("Overflow\n");
        return;
    }
    if (front1 == -1) front1 = 0;
    arr[++rear1] = val;
}

void enqueue2(int val) {
    if (rear1 + 1 == rear2) {
        printf("Overflow\n");
        return;
    }
    if (front2 == MAX) front2 = MAX - 1;
    arr[--rear2] = val;
}

void dequeue1() {
    if (front1 == -1 || front1 > rear1) {
        printf("Underflow\n");
        return;
    }
    front1++;
}

void dequeue2() {
    if (front2 == MAX || front2 < rear2) {
        printf("Underflow\n");
        return;
    }
    front2--;
}

void display1() {
    for (int i = front1; i <= rear1; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void display2() {
    for (int i = front2; i >= rear2; i--)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    enqueue1(10);
    enqueue1(20);
    enqueue2(30);
    enqueue2(40);
    display1();
    display2();
    dequeue1();
    dequeue2();
    display1();
    display2();
    return 0;
}


//  9 : Applications of Queue

#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int pid) {
    if (rear == MAX - 1) return;
    if (front == -1) front = 0;
    queue[++rear] = pid;
}

void simulateFCFS() {
    if (front == -1 || front > rear) {
        printf("No processes\n");
        return;
    }
    for (int i = front; i <= rear; i++)
        printf("Processing PID %d\n", queue[i]);
}

int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);
    simulateFCFS();
    return 0;
}

