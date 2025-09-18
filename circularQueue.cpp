#include <iostream>
using namespace std;

class CircularQueue {
public:
    int *arr, size, front, rear;

    CircularQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Push (enqueue)
    void push(int data) {
        // Queue full condition
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
            cout << "Q is full" << endl;
            return;
        }
        // First element
        else if (front == -1) {
            front = rear = 0;
            arr[rear] = data;
        }
        // Circular nature
        else if (rear == size - 1 && front != 0) {
            rear = 0;
            arr[rear] = data;
        }
        // Normal flow
        else {
            rear++;
            arr[rear] = data;
        }
    }

    // Pop (dequeue)
    void pop() {
        if (front == -1) {
            cout << "Q is empty" << endl;
            return;
        }
        // Single element
        else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // Circular nature
        else if (front == size - 1) {
            front = 0;
        }
        // Normal flow
        else {
            front++;
        }
    }

    // Display Queue
    void display() {
        if (front == -1) {
            cout << "Q is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        } else {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    CircularQueue q(5); // Queue of size 5

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    
    // cout<<"After pop:"<<endl;
    q.pop(); // removes 10
    q.display();

    q.push(50);
    q.push(60); // wrap-around insertion
    q.display();

    q.pop(); // removes 20
    q.display();

    return 0;
}
