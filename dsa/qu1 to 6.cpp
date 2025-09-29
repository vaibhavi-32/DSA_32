// q 1 to 6
// Q 1 

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* last;

public:
    CircularLinkedList() {
        last = NULL;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        if (last == NULL) {
            newNode->next = newNode;
            last = newNode;
        } else {
            newNode->next = last->next;
            last->next = newNode;
            last = newNode;
        }
    }

    void display() {
        if (last == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = last->next;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != last->next);
        cout << "(head)\n";
    }

    void deleteFromBeginning() {
        if (last == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = last->next;
        if (last == temp) {
            last = NULL;
        } else {
            last->next = temp->next;
        }
        delete temp;
    }
};

int main() {
    CircularLinkedList cll;
    int choice, value;
    while (true) {
        cout << "\n1. Insert at End\n2. Display\n3. Delete from Beginning\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                cll.insertAtEnd(value);
                break;
            case 2:
                cll.display();
                break;
            case 3:
                cll.deleteFromBeginning();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice.\n";
        }
    }
    return 0;
}


// Q 2
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyCircularLinkedList {
private:
    Node* head;

public:
    DoublyCircularLinkedList() {
        head = NULL;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        if (head == NULL) {
            newNode->next = newNode->prev = newNode;
            head = newNode;
        } else {
            Node* tail = head->prev;
            tail->next = newNode;
            newNode->prev = tail;
            newNode->next = head;
            head->prev = newNode;
        }
    }

    void insertAtBeginning(int value) {
        insertAtEnd(value);
        head = head->prev;
    }

    void deleteFromBeginning() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        if (head->next == head) {
            delete head;
            head = NULL;
        } else {
            Node* temp = head;
            Node* tail = head->prev;
            head = head->next;
            head->prev = tail;
            tail->next = head;
            delete temp;
        }
    }

    void deleteFromEnd() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        if (head->next == head) {
            delete head;
            head = NULL;
        } else {
            Node* tail = head->prev;
            Node* newTail = tail->prev;
            newTail->next = head;
            head->prev = newTail;
            delete tail;
        }
    }

    void displayForward() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " <-> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(head)\n";
    }

    void displayBackward() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head->prev;
        do {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        } while (temp != head->prev);
        cout << "(tail)\n";
    }
};

int main() {
    DoublyCircularLinkedList dcll;
    int choice, value;
    while (true) {
        cout << "\n1. Insert at Beginning\n2. Insert at End\n3. Delete from Beginning\n4. Delete from End\n5. Display Forward\n6. Display Backward\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                dcll.insertAtBeginning(value);
                break;
            case 2:
                cout << "Enter value: ";
                cin >> value;
                dcll.insertAtEnd(value);
                break;
            case 3:
                dcll.deleteFromBeginning();
                break;
            case 4:
                dcll.deleteFromEnd();
                break;
            case 5:
                dcll.displayForward();
                break;
            case 6:
                dcll.displayBackward();
                break;
            case 7:
                exit(0);
            default:
                cout << "Invalid choice.\n";
        }
    }
    return 0;
}





// q 3

#include <iostream>
#include <cmath>
using namespace std;

class Node {
public:
    int coeff;
    int power;
    Node* next;
    Node(int c, int p) : coeff(c), power(p), next(NULL) {}
};

class Polynomial {
private:
    Node* head;

public:
    Polynomial() : head(NULL) {}

    void insertTerm(int coeff, int power) {
        Node* newNode = new Node(coeff, power);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->coeff << "x^" << temp->power;
            temp = temp->next;
            if (temp)
                cout << " + ";
        }
        cout << endl;
    }

    double evaluate(int x) {
        double result = 0;
        Node* temp = head;
        while (temp) {
            result += temp->coeff * pow(x, temp->power);
            temp = temp->next;
        }
        return result;
    }
};

int main() {
    Polynomial poly;
    int n, coeff, power, x;

    cout << "Enter number of terms in the polynomial: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter coefficient and power for term " << i + 1 << ": ";
        cin >> coeff >> power;
        poly.insertTerm(coeff, power);
    }

    cout << "Polynomial: ";
    poly.display();

    cout << "Enter value of x to evaluate: ";
    cin >> x;

    cout << "Value of polynomial at x = " << x << " is " << poly.evaluate(x) << endl;

    return 0;
}


// q 4

#include <iostream>
using namespace std;

class Node {
public:
    int coeff;
    int power;
    Node* next;
    Node(int c, int p) : coeff(c), power(p), next(NULL) {}
};

class Polynomial {
private:
    Node* head;

public:
    Polynomial() : head(NULL) {}

    void insertTerm(int coeff, int power) {
        Node* newNode = new Node(coeff, power);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    Polynomial add(Polynomial& other) {
        Polynomial result;
        Node* p1 = head;
        Node* p2 = other.head;

        while (p1 && p2) {
            if (p1->power > p2->power) {
                result.insertTerm(p1->coeff, p1->power);
                p1 = p1->next;
            } else if (p1->power < p2->power) {
                result.insertTerm(p2->coeff, p2->power);
                p2 = p2->next;
            } else {
                result.insertTerm(p1->coeff + p2->coeff, p1->power);
                p1 = p1->next;
                p2 = p2->next;
            }
        }

        while (p1) {
            result.insertTerm(p1->coeff, p1->power);
            p1 = p1->next;
        }

        while (p2) {
            result.insertTerm(p2->coeff, p2->power);
            p2 = p2->next;
        }

        return result;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->coeff << "x^" << temp->power;
            temp = temp->next;
            if (temp)
                cout << " + ";
        }
        cout << endl;
    }
};


// q 5

#include <iostream>
#include <string>
using namespace std;

struct Song {
    string title;
    Song* next;
    Song* prev;

    Song(string t) : title(t), next(nullptr), prev(nullptr) {}
};

class Playlist {
private:
    Song* head;
    Song* tail;
    Song* current;

public:
    Playlist() : head(nullptr), tail(nullptr), current(nullptr) {}

    void addSong(string title) {
        Song* newSong = new Song(title);
        if (!head) {
            head = tail = current = newSong;
        } else {
            tail->next = newSong;
            newSong->prev = tail;
            tail = newSong;
        }
        cout << "🎶 Added: " << title << endl;
    }

    void removeSong(string title) {
        Song* temp = head;
        while (temp) {
            if (temp->title == title) {
                if (temp == head) head = temp->next;
                if (temp == tail) tail = temp->prev;
                if (temp->prev) temp->prev->next = temp->next;
                if (temp->next) temp->next->prev = temp->prev;
                if (temp == current) current = temp->next ? temp->next : temp->prev;
                delete temp;
                cout << "🗑️ Removed: " << title << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "⚠️ Song not found: " << title << endl;
    }

    void playNext() {
        if (current && current->next) {
            current = current->next;
            cout << "▶️ Now Playing: " << current->title << endl;
        } else {
            cout << "⏭️ No next song available." << endl;
        }
    }

    void playPrevious() {
        if (current && current->prev) {
            current = current->prev;
            cout << "⏮️ Now Playing: " << current->title << endl;
        } else {
            cout << "⏮️ No previous song available." << endl;
        }
    }

    void showCurrent() {
        if (current)
            cout << "🎧 Currently Playing: " << current->title << endl;
        else
            cout << "🔇 Playlist is empty." << endl;
    }
};

int main() {
    Playlist myPlaylist;

    myPlaylist.addSong("Bohemian Rhapsody");
    myPlaylist.addSong("Imagine");
    myPlaylist.addSong("Hotel California");

    myPlaylist.showCurrent();
    myPlaylist.playNext();
    myPlaylist.playNext();
    myPlaylist.playPrevious();

    myPlaylist.removeSong("Imagine");
    myPlaylist.showCurrent();

    return 0;
}


// q 6 

#include <iostream>
using namespace std;

struct Process {
    string name;
    int burstTime;
    int remainingTime;
    Process* next;
};

class RoundRobinScheduler {
private:
    Process* head = nullptr;
    int timeQuantum;

public:
    RoundRobinScheduler(int tq) : timeQuantum(tq) {}

    void addProcess(string name, int burstTime) {
        Process* newProcess = new Process{name, burstTime, burstTime, nullptr};
        if (!head) {
            head = newProcess;
            head->next = head;
        } else {
            Process* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newProcess;
            newProcess->next = head;
        }
    }

    void execute() {
        Process* current = head;
        Process* prev = nullptr;

        while (head) {
            cout << "Executing " << current->name << " for ";
            int execTime = min(timeQuantum, current->remainingTime);
            current->remainingTime -= execTime;
            cout << execTime << " units. Remaining: " << current->remainingTime << endl;

            if (current->remainingTime <= 0) {
                cout << current->name << " completed.\n";
                if (current == current->next) {
                    delete current;
                    head = nullptr;
                    break;
                } else {
                    if (current == head) head = head->next;
                    prev->next = current->next;
                    delete current;
                    current = prev->next;
                }
            } else {
                prev = current;
                current = current->next;
            }
        }
    }
};

int main() {
    RoundRobinScheduler scheduler(3); // Time quantum = 3 units

    scheduler.addProcess("P1", 5);
    scheduler.addProcess("P2", 8);
    scheduler.addProcess("P3", 6);

    scheduler.execute();

    return 0;
}

