#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
        this->data = 0;
        this->next = NULL;
    }
};
node *push(node *stack)
{
    int value = 0;
    cout << "Enter the value :";
    cin >> value;
    node *newNode = new node();
    newNode->data = value;
    if (stack == NULL)
    {
        stack = newNode;
        return (stack);
    }
    else
    {
        node *temp = stack;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        return (stack);
    }
}
node *pop(node *stack)
{
    if (stack == NULL)
    {
        cout<<"Stack is empty.\n";
        return (stack);
    }
    else
    {
        node *temp1 = stack;
        node *temp2;
        while (temp1->next != NULL)
        {
            temp2 = temp1;
            temp1 = temp1->next;
        }
        temp2->next = NULL;
        return (stack);
    }
}
int peek(node *stack)
{
    node *temp = stack;
    if (stack == NULL)
    {
        return (0);
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        return (temp->data);
    }
}
bool isEmpty(node *stack)
{
    if (stack == NULL)
    {
        return (true);
    }
    return (false);
}
void display(node *stack)
{
    node *temp = stack;
    if (stack == NULL)
    {
        cout << "Stack is empty.\n";
    }
    else
    {
        cout<<"Stack -> ";
        while (temp->next != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << "\n";
    }
}
int main()
{
    node *head = NULL;
    bool x = true;
    while (x)
    {
        cout << "1. Push value into the stack\n"
             << "2. Pop value from the stack\n"
             << "3. Peek top element\n"
             << "4. Check whether stack is Empty?\n"
             << "5. Display elements of the stack.\n"
             << "6. Exit\n"
             << "Enter your choice :";
        int choice = 0;
        cin >> choice;
        switch (choice)
        {
        case 1:
            head = push(head);
            break;
        case 2:
            head = pop(head);
            break;
        case 3:
            cout << peek(head) << "\n";
            break;
        case 4:
            if (isEmpty)
            {
                cout << "Stack is empty.\n";
            }
            else
            {
                cout << "Stack is not empty.\n";
            }
            break;
        case 5:
            display(head);
            break;
        default:
            x=false;  
        }
    }
}