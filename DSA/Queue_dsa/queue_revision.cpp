#include <bits/stdc++.h>
using namespace std;
class queue
{
    int *arr;
    int front;
    int rear;
    int size;

    queue()
    {
        size = 100005;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int d)
    {
        if (rear == size)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            rear++;
            arr[rear] = d;
        }
    }

    int dequeue()
    {
        if (front == rear)
        {
            cout << "queue is empty" << endl;
        }
        int x = arr[front];
        arr[front] = -1;
        front++;

        if (front == rear)
        {
            front = 0;
            rear = 0;
        }
        return x;
    }

    int front()
    {
        if (front == rear)
        {

            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};
int main()
{
    
    return 0;
}