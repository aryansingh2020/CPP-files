#include <iostream>
using namespace std;

class StackADT
{
private:
    int lastIndex;
    int capacity;
    int *ptr;

public:
    StackADT(int capacity)
    {
        this->lastIndex = -1;
        this->capacity = capacity;
        this->ptr = new int[capacity];
    }
    // int createStack(int capacity);
    int push(int value);
    int top();
    int pop();
    int size();
    void print();
};
// int StackADT::createStack(int capacity)
// {
//     this->lastIndex = -1;
//     this->capacity = capacity;
//     this->ptr = new int[capacity];
//     return(1);
// }
int StackADT::push(int value)
{
    // this->lastIndex=this->lastIndex+1;
    if (this->lastIndex == capacity - 1)
    {
        cout << "Stack is full.\n";
        return (-1);
    }
    else if (this->lastIndex == -1)
    {
        this->lastIndex = this->lastIndex + 1;
        this->ptr[0] = value;
        return (1);
    }
    else
    {
        this->lastIndex = lastIndex + 1;
        int i;
        i = this->lastIndex;
        while (i != 0)
        {
            this->ptr[i] = this->ptr[i - 1];
            i--;
        }
        this->ptr[0] = value;
        return (1);
    }
}
int StackADT::top()
{
    if (this->lastIndex == -1)
    {
        cout << "Stack is empty.\n";
        return (-1);
    }
    else
    {
        return (this->ptr[0]);
    }
}
int StackADT::pop()
{
    if (this->lastIndex == -1)
    {
        cout << "Stack is empty.\n";
        return (-1);
    }
    else
    {
        
        int i = 0;
        while (i != this->lastIndex)
        {
            this->ptr[i] = this->ptr[i + 1];
            i++;
        }
        this->lastIndex = this->lastIndex - 1;
        return (1);
    }
}
int StackADT::size()
{
    return(this->lastIndex+1);
}
void StackADT::print()
{
    if (this->lastIndex == -1)
    {
        cout << "Stack is empty.\n";
    }
    else
    {
        for (int i = 0; i <= this->lastIndex; i++)
        {
            cout << this->ptr[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    StackADT s1(3),s2(5);
    
    s1.push(3);
    s1.push(8);
    s1.push(6);
    s1.push(1);
    cout<<s1.size()<<endl;
    s1.print();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;
}
