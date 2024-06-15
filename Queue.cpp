#include "Queue.h"

Queue::Queue(int c = 5)
{
    size = 0;
    capacity = c;
    Front = Back = nullptr;
}

Queue::~Queue()
{
    while (!empty())
    {
        pop();
    }
    cout << "queue deleted" << endl;
}

void Queue::push(Robot *v)
{
    if (full())
        return;

    Node *n = new Node;
    n->data = v;
    n->next = nullptr;

    if (empty())
    {
        Front = Back = n;
    }
    else
    {
        Back->next = n;
        Back = n;
    }
    size++;
}

void Queue::pop()
{
    if (empty())
        return;

    Node *n = Front;
    Front = Front->next;
    delete n;
    size--;

    if (empty())
    {
        Back = nullptr;
    }
}

void Queue::front()
{
    if (empty())
        // return ;
        cout << "the node is empty" << endl;
    ;
    // return Front->data;
    cout << Front->data << endl;
}

void Queue::action(){
    if (empty())
        cout << "the node is empty" << endl;
    Front->data->action(0,0);
    cout << "this robot action"<< endl;
}

Queue::Queue(const Queue &other)
{
    size = 0;
    capacity = other.capacity;
    Front = Back = nullptr;

    Node *ptr = other.Front;
    while (ptr != nullptr)
    {
        push(ptr->data);
        ptr = ptr->next;
    }
}