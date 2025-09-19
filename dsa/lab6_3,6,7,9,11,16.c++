//  Q:3  Reimplement Q-1 in C++ using a class-based approach.

#include <iostream>
using namespace std;

class Stack {
    int stack[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == 99) {
            cout << "Stack is full" << endl;
        } else {
            top++;
            stack[top] = value;
            cout << value << " pushed to stack" << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << stack[top] << " popped from stack" << endl;
            top--;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element is " << stack[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements are:" << endl;
            for (int i = top; i >= 0; i--) {
                cout << stack[i] << endl;
            }
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
        } else if (choice == 2) {
            s.pop();
        } else if (choice == 3) {
            s.peek();
        } else if (choice == 4) {
            s.display();
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}



// Q:6. Implement stack operations using Linked List in C++ with classes and objects.


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr)
            return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    void display() {
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
}

// Q:7. Write a program to demonstrate the use of the stack container in C++ STL by performing:
o Push elements
o Pop elements
o Access top() element
o Display size and empty status

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    s.pop();

    cout << "Top after pop: " << s.top() << endl;
    cout << "Size: " << s.size() << endl;

    if (s.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}
// Q:9. Repeat the above in C++ using a class-based implementation.
#include <iostream>
using namespace std;

class TwoStacks {
private:
    int* arr;
    int size;
    int top1;
    int top2;

public:
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    void push1(int val) {
        if (top1 + 1 == top2)
            return;
        arr[++top1] = val;
    }

    void push2(int val) {
        if (top2 - 1 == top1)
            return;
        arr[--top2] = val;
    }

    void pop1() {
        if (top1 == -1)
            return;
        top1--;
    }

    void pop2() {
        if (top2 == size)
            return;
        top2++;
    }

    void display1() {
        for (int i = 0; i <= top1; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void display2() {
        for (int i = size - 1; i >= top2; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    TwoStacks ts(100);
    int choice, val;

    while (true) {
        cout << "\n1.Push Stack 1\n2.Push Stack 2\n3.Pop Stack 1\n4.Pop Stack 2\n5.Display Stack 1\n6.Display Stack 2\n7.Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> val;
                ts.push1(val);
                break;
            case 2:
                cin >> val;
                ts.push2(val);
                break;
            case 3:
                ts.pop1();
                break;
            case 4:
                ts.pop2();
                break;
            case 5:
                ts.display1();
                break;
            case 6:
                ts.display2();
                break;
            case 7:
                return 0;
        }
    }
}
   


// Q:11. Write a program to reverse a string in C++ using the stack STL.

#include <iostream>
#include <stack>
#include <string>

int main() {
    std::string input;
    std::stack<char> s;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    for (char ch : input) {
        s.push(ch);
    }

    std::string reversed;
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}




// Q:16. Repeat the above in C++ using STL stack

#include <iostream>
#include <stack>
#include <string>

int main() {
    std::string input;
    std::stack<char> s;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    for (char ch : input)
        s.push(ch);

    std::string reversed;
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}
