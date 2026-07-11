// Convert IQueue and ArrayQueue classes (that you developed in Lab 6)
// into generic classes to enable them to work with any type of data.

#include <iostream>
using namespace std;

template <typename T>
class IQueue {
public:
    virtual void insert(T) = 0;
    virtual void remove() = 0;
    virtual T front() = 0;
    virtual T rear() = 0;
};

template <typename T>
class ArrayQueue : public IQueue<T> {
    T arr[5];
    int size;

public:
    ArrayQueue() {
        size = 0;
    }

    void insert(T value) {
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

    T front() {
        if (size == 0)
            throw "Queue is empty";

        return arr[0];
    }

    T rear() {
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
    ArrayQueue<int> intQueue;
    ArrayQueue<string> stringQueue;

    // Testing integer queue
    cout << "Integer Queue:" << endl;
    for (int i = 1; i <= 5; i++) {
        intQueue.insert(i);
    }
    intQueue.display();
    intQueue.remove();
    intQueue.display();
    cout << "Front: " << intQueue.front() << ", Rear: " << intQueue.rear() << endl;

    // Testing string queue
    cout << "\nString Queue:" << endl;
    stringQueue.insert("Hello");
    stringQueue.insert("World");
    stringQueue.display();
    stringQueue.remove();
    stringQueue.display();
    cout << "Front: " << stringQueue.front() << ", Rear: " << stringQueue.rear() << endl;

    return 0;
}