
class MyCircularQueue {
private:
    std::vector<int> queue;
    int capacity;
    int size;
    int front;
    int rear;

public:
    // Initializes the object with the size of the queue to be k.
    MyCircularQueue(int k) {
        queue.resize(k);
        capacity = k;
        size = 0;
        front = 0;
        rear = -1; // Initialized to -1 so the first enQueue brings it to 0
    }
    
    // Inserts an element into the circular queue. Return true if the operation is successful.
    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        // Advance rear index circularly and insert the value
        rear = (rear + 1) % capacity;
        queue[rear] = value;
        size++;
        return true;
    }
    
    // Deletes an element from the circular queue. Return true if the operation is successful.
    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        // Advance front index circularly to drop the element
        front = (front + 1) % capacity;
        size--;
        return true;
    }
    
    // Gets the front item from the queue. If the queue is empty, return -1.
    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return queue[front];
    }
    
    // Gets the last item from the queue. If the queue is empty, return -1.
    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return queue[rear];
    }
    
    // Checks whether the circular queue is empty or not.
    bool isEmpty() {
        return size == 0;
    }
    
    // Checks whether the circular queue is full or not.
    bool isFull() {
        return size == capacity;
    }
};
