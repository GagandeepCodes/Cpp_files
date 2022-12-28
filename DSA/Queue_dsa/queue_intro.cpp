#include <bits/stdc++.h>
using namespace std;
class queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
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
            arr[rear] = d;
            rear++;
        }
    }

    int dequeue()
    {
        if (front == rear)
        {
            cout << "queue is empty" << endl;
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
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