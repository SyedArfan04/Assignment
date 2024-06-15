#pragma once

#include <iostream>
#include "Robot.h"

using namespace std;

class Robot;

struct Node
{
    Robot *data;
    Node *next;
};

class Queue
{
    Node *Front, *Back;
    int size;
    int capacity;

public:
    Queue(int c);

    bool empty() { return size == 0; }

    bool full() { return size == capacity; }

    ~Queue();

    void push(Robot *v);

    void pop();

    void front();

    void action();

    Queue(const Queue &other);
};

// int main()
// {
//     Queue q;
//     q.push(5);
//     q.push(6);
//     q.push(3);
//     q.push(10);
//     Queue q2(q);
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
//     while (!q2.empty())
//     {
//         cout << q2.front() << " ";
//         q2.pop();
//     }
//     return 0;
// }