#include <iostream>

using namespace std;

class Queue
{
  private:
    int front = 0;
    int back = 0;
    int cust_count = 0;
    int customers[10];
    int capacity = 10;
    //Private function shift_array()
    //deals with issue encountered when the an
    //item is removed (dequeued) and the empty
    //space is created at the front of the
    //queue.
    void shift_array()
    {
        int i = 0;
        for (; i < cust_count; i++)
        {
            customers[i] = customers[i + 1];
        }
    }

  public:
    //Constructor
    //Populates the queue with values
    //Also ensures the that customer count is
    //equal to the capacity of the line since
    //at the begining all spaces in the
    //queue will be occupied.
    Queue()
    {
        int i = 0;
        for (; i < capacity; i++)
        {
            customers[i] = i + 1;
        }
        cust_count = capacity;
        back = capacity - 1;
    }
    //Destructor
    ~Queue() {}
    //Adds a value to the back of the line
    void enqueue(int number)
    {
        bool queue_full = is_full();
        if (queue_full)
        {
            cout << "The queue is full" << endl;
        }
        else
        {
            shift_array(); //this is important.
            customers[back] = number;
            back++;
            cust_count++;
        }
    }
    //Removes an item from the front
    //of the line if the line is
    //no empty
    int dequeue()
    {
        bool queue_empty = is_empty();
        int success = 0; //used to determine if the dequeue operation was successfulls
        if (queue_empty)
        {
            success = -1;
        }
        else
        {
            success = customers[front]; //the front item of the queue is removed
            customers[front] = 0;       //the front item is replaced with zero
            cust_count--;               //the numebr of customers in the line has decreased.
            front++;                    //front is advanced by one
        }
        return success;
    }
    //Checks if the queue is empty
    //the queue is empty if the front and back values are the
    //same
    bool is_empty()
    {
        if (front == back)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //Checks if the queue is full.
    bool is_full()
    {
        if (cust_count == capacity)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //Returns the customer at the front of the line.
    //This function doesnt modify the queue in any way
    int peek()
    {
        return customers[front];
    }
    //Returns the size of the queue.
    int size()
    {
        return cust_count;
    }
    //Prints the values in the queue.
    void print()
    {
        for (int i = 0; i < capacity; i++)
            cout << customers[i] << " ";
    }
};

int main()
{
    Queue queue;
    queue.print();
    cout << "The value removed is " << queue.dequeue() << endl;
    queue.print();
    cout << endl
         << "The size after dequeue " << queue.size() << endl;
    queue.enqueue(12);
    queue.print();
    return 0;
}
