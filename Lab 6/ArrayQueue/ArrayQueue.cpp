#include <iostream>
#include <string>
using namespace std;

class Queue
{
private:
    string *items;   // Array to store queue elements
    int head;        // Index of front element
    int tail;        // Index of rear element
    int size;        // Maximum capacity of the queue
    int count;       // Current number of elements in the queue

public:
    Queue(int s = 100)
    {
        size = s;
        items = new string[size];
        head = 0;
        tail = -1;
        count = 0;
    }

    void insert(string name)
    {
        if (count >= size)
        {
            cout << "Queue is full" << endl;
            return;
        }

        tail = (tail + 1) % size;
        items[tail] = name;
        count++;
    }

    void show()
    {
        if (count == 0)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        int index = head;
        int printed = 0;
        while (printed < count)
        {
            cout << items[index] << " <- ";
            index = (index + 1) % size;
            printed++;
        }
        cout << "NULL" << endl;
    }

    void remove()
    {
        if (count == 0)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Removing: " << items[head] << endl;
        head = (head + 1) % size;
        count--;
    }
};

int main()
{
    Queue queue(100);

    queue.insert("Ali");
    queue.insert("Ahmed");
    queue.insert("Alee");
    queue.insert("Abu");

    queue.show();

    queue.remove();
    cout << "After Remove: ";
    queue.show();

    return 0;
}