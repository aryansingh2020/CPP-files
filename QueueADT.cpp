#include <iostream>
using namespace std;

class QueueADT
{
private:
    int bk;
    int ft;
    int capacity;
    int *ptr;

public:
    QueueADT(int capacity)
    {
        this->capacity=capacity;
        this->ft = -1;
        this->bk = -1;
        this->ptr=new int[this->capacity];
    }
    int push(int value);
    int front();
    int back();
    int pop();
    bool empty();
    int size();
    void print();
};
int QueueADT::push(int value)
{
    if (bk == capacity - 1)
    {
        cout << "Queue is full\n";
        return (-1);
    }
    else if (this->bk<=capacity-1 && this->ft ==-1)
    {
        this->ft = this->ft + 1;
        this->bk = this->bk + 1;
        this->ptr[this->bk] = value;
        return (1);
    }
    else if(this->bk<=capacity-1 && this->ft!=-1)
    {
        this->bk = this->bk + 1;
        this->ptr[bk] = value;
        return (1);
    }
}
int QueueADT::front()
{
    if (this->ft == -1 || this->bk==-1)
    {
        cout << "Queue is empty.\n";
        return (-1);
    }
    return (this->ptr[this->bk]);
}
int QueueADT::back()
{
    if (this->bk == -1)
    {
        cout << "Queue is empty.\n";
        return (-1);
    }
    return (this->ptr[this->bk]);
}
bool QueueADT::empty()
{
    if (this->ft == -1)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}
int QueueADT::size()
{
    return (this->bk + 1);
}
int QueueADT::pop()
{
    if (this->bk==-1)
    {
        cout << "Queue is empty.\n";
        return (-1);
    }
    else
    {
        int i;
        i = 0;
        while (i != this->bk)
        {
            ptr[i] = ptr[i + 1];
            i++;
        }
        this->bk = this->bk - 1;
        return (1);
    }
}
void QueueADT::print()
{
    if (this->ft == -1 || this->bk == -1)
    {
        cout << "Queue is empty.\n";
    }
    else
    {
        for (int i = 0; i <= this->bk; i++)
        {
            cout << this->ptr[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    QueueADT q1(5);
    q1.push(12);
    q1.push(13);
    q1.push(78);
    q1.push(71);
    q1.push(34);
    q1.push(90);
    q1.print();
    cout<<q1.front()<<endl;
    cout<<q1.back()<<endl;
    cout<<q1.size()<<endl;
    q1.pop();
    q1.pop();
    q1.print();
    cout<<q1.size()<<endl;
    q1.pop();
    q1.pop();
    q1.pop();
    // q1.pop();
    // q1.pop();
    q1.print();
    cout<<q1.front()<<endl;
    cout<<q1.back()<<endl;
    cout<<q1.size()<<endl;
}