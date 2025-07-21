#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
Node *create_DLL(int arr[], int index, int size, Node *back)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]); // create Node
    temp->prev = back;
    temp->next = create_DLL(arr, index + 1, size, temp);

    return temp;
}

int main()
{

    Node *head = NULL;

    // create Array
    int arr[] = {1, 2, 3, 4, 5};
    Node *tail = NULL;

    head = create_DLL(arr, 0, 5, NULL);

    // Delete Start
    if (head != NULL)
    {
        //if only one node exist 
        if(head->next == NULL)
        {
            delete head;head = NULL;
        }
        //if more than one node
        Node *temp = head;
        head = head->next;
        delete temp;
        head->prev = NULL;
    }


    //Delete End
    if(head != NULL)
    {
        //if only 1 node available 
        if(head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else // More than one Node
        {
            Node *curr = head;
            while(curr->next)
            {
                curr = curr->next;
            }
            curr->prev ->next = NULL;
            delete curr;
        }
    }


    // print
    Node *traverse = head;
    while (traverse)
    {
        cout << traverse->data << " ";
        traverse = traverse->next;
    }
    return 0;
}
