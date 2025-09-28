#include<iostream>
using namespace std;
#define size 5
#define ERROR -9999

class Queue {
    int rear, front, ar[size];
public:
    Queue() {
        rear = -1;
        front = -1;
    }
    void enqueue(int);
    int dequeue();
    void disp();
};

void Queue::enqueue(int num) {
    // CORRECT Queue Full check for a linear array
    if (rear == size - 1) { 
        cout << "Queue is full" << endl;
        return;
    } 
    
    // Set front to 0 when inserting the first element
    if (front == -1) {
        front = 0;
    }
    
    // Always increment rear and insert the element
    ar[++rear] = num;
}

int Queue::dequeue() {
    // CORRECT Queue Empty check
    if (front == -1 || front > rear) { 
        cout << "Queue is empty" << endl;
        return ERROR;
    } 
    
    int val = ar[front++];
    
    // Optional: Reset queue if front moves past rear (becomes empty)
    if (front > rear) {
        front = -1;
        rear = -1;
    }
    
    return val;
}

void Queue::disp() {
    // CORRECT Queue Empty check
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    } 
    
    cout << "Queue contents (front to rear): ";
    for (int i = front; i <= rear; i++) {
        cout << ar[i] << " "; 
    }
    cout << endl;
}

int main() {
    Queue q1;
    q1.enqueue(4);
    q1.enqueue(8);
    q1.enqueue(3);
    
    // Output: Queue contents (front to rear): 4 8 3 
    q1.disp(); 
    
    int val = q1.dequeue(); // Dequeues 4
    
    cout << endl << "Deleted element: " << val << endl;
    
    // Expected Output: Queue contents (front to rear): 8 3 
    q1.disp();
    
    return 0; // Proper exit code
}


//Queue contents (front to rear): 4 8 3 

//Deleted element: 4
//Queue contents (front to rear): 8 3 
