#include <iostream>
using namespace std;

//Node class representing a single node in the linked list
class Node
{
    public:
        int data;
        Node *next;

        Node()
        {
            next = NULL;
        }
};

//Stack class
class Stack
{
    private:
        Node *top; // Pointer to the top node of the stack
    public:
        Stack()
        {
            top = NULL; // Initialize the stack with a null top
        }

        // Push operation : Insert an element onto the top of the
        int push(int value)
        {
            Node *newNode = new Node();     //1.Allocate memory for a new node
            newNode->data = value;          //2.assign value
            newNode->next = top;            //3.Set the next pointer
            top = newNode;                  //4.Update the top pointer to point to the new node
            cout << "Push value:" << value << endl;
            return value; 
        }

        // Pop operation : Remove the topmost element from the stack
        void pop()
        {
            Node *temp = top;
            if (isEmpty())
            {
                cout << "Stack is empty." << endl;
                return;
            }

            cout << "Popped value: " << temp->data << endl;
            top = temp->next; // Update the top pointer to the next node
            delete temp; 
        }
}