#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data-48;
        this->next = NULL;
    }
  
};

void printList(Node *head)
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            {
                cout << ptr->data;
                ptr = ptr->next;
            }
        }
       cout<< endl;
    }
Node *append(Node *head,char *value){
    Node *ptr = NULL;
    for (int i = 0; value[i] != '\0'; i++)
    {
        // cout << num[i] << endl;
        if (head == NULL)
        {
            head = new Node(value[i]);
            ptr = head;
            continue;
        }
        ptr->next=new Node(value[i]);
        ptr=ptr->next;
    }
    return head;
}
int main()
{
    
    char num[100];
    cout << "Enter first number" << endl;
    cin >> num;
    Node *num1 = NULL;
    num1=append(num1,num);
    cout << "Enter second number" << endl;
    cin >> num;
    Node *num2 =NULL;
    num2=append(num2,num);
    printList(num1);
    printList(num2);
    return 0;
}