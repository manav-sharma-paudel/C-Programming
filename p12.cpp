// We need to implement a First-In-First-Out (FIFO) list, called Queue, with four
// functions: insert (adding an element), remove (removing the first inserted element),
// front (peeking the first inserted element without removing it) and rear (peeking the
// last inserted element without removing it).
// Like Stack, it can be implemented by storing the data contiguously or non-contiguously.
// Create an interface class IQueue with the functionalities mentioned above. Create a
// class ArrayQueue that inherits IQueue and stores the data elements in an array.
// The insert() method must throw an exception if the queue is full. Similarly, remove(),
// front() and rear() must throw an exception if the queue is empty.
// The remove() method must remove the first element, and then move all remaining
// elements to the previous index, i.e. the element at index 1 must be moved to index 0,
// the element at index 2 to index 1 and so on.

#include <iostream>
using namespace std;

class IQueue {
public:
    virtual void insert(int) = 0;
    virtual void remove() = 0;
    virtual int front() = 0;
    virtual int rear() = 0;
};

class ArrayQueue : public IQueue {
    int arr[5];
    int size;

public:
    ArrayQueue() {
        size = 0;
    }

    void insert(int value) {
        if (size == 5)
            throw "Queue is full";

        arr[size] = value;
        size++;
    }

    void remove() {
        if (size == 0)
            throw "Queue is empty";

        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    int front() {
        if (size == 0)
            throw "Queue is empty";

        return arr[0];
    }

    int rear() {
        if (size == 0)
            throw "Queue is empty";

        return arr[size - 1];
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayQueue q;

    try {
        q.insert(10);
        q.insert(20);
        q.insert(30);

        cout << "Queue: ";
        q.display();

        cout << "Front = " << q.front() << endl;
        cout << "Rear = " << q.rear() << endl;

        q.remove();

        cout << "After removing first element:" << endl;
        q.display();

        cout << "Front = " << q.front() << endl;
        cout << "Rear = " << q.rear() << endl;
    }
    catch (const char *msg) {
        cout << msg << endl;
    }

    return 0;
}