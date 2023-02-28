#include <bits/stdc++.h>
using namespace std;
class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;
    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }
    bool enqueue(int value)
    {
        if (front == 0 && real == size - 1 || rear == (front - 1) % (size - 1))
        {
            cout << "Queue is full" << endl;
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
            // arr[rear] = value;
        }
        else if (rear == size - 1)
        {
            rear = 0;
            // arr[rear] = value;
        }
        else
        {
            rear++;
            // arr[rear] = value;
        }
        arr[rear] = value;
        return true;
    }

    int dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];

        else if (front == rear)
        {

            front = rear = -1;
        }
        else if (fornt = size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
};
int main()
{

    return 0;
}