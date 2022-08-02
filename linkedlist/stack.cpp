#include <string>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void push(int data, Node **head)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
int pop(Node **head){
    if((*head)==NULL){
       cout << "ERROR: Node is NULL" << endl;
    } 
    int data = (*head)->data;
    cout<<data;
    (*head)=(*head)->next;
    return data;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<< node->data;
        node = node->next;
    }
    cout <<endl;
}

int main()
{
    int data,popped;
    Node *head = NULL;
    int option;
    while (option)
    {
        cout << "1.Push\n"
             << "2.pop\n"
             << "0.exit\n"<< endl;
        cin>>option;
        switch (option)
        {
            {
            case 1:
               cin>>data;
               push(data, &head);
               printList(head);
               continue;
            case 2:
                popped = pop(&head);
                printList(head);
                continue;
            default:
                break;
            }
        }
    }
    printList(head);
    return 0;
}