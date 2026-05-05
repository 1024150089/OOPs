#include <iostream>
using namespace std;

template <class T>
class Queue
{
    T arr[100];
    int front, rear;

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }

    void enqueue(T x)
    {
        if (rear == 99)
        {
            cout << "Overflow\n";
            return;
        }
        arr[++rear] = x;
    }

    void dequeue()
    {
        if (front > rear)
        {
            cout << "Underflow\n";
            return;
        }
        front++;
    }

    void display()
    {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();
}