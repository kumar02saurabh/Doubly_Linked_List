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
    if(index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]); // create Node 
    temp ->prev = back;
    temp ->next = create_DLL(arr, index+1, size, temp);

    return temp;

}

int main()
{

    Node *head = NULL;

    // create Array
    int arr[] = {1, 2, 3, 4, 5};
    Node *tail = NULL;

    head = create_DLL(arr, 0, 5, NULL);

    // // Linked List does not exist
    // if (head == NULL)
    // {
    //     head = new Node(5);
    // }
    // // Allready Exist
    // else
    // {
    //     Node *temp = new Node(5);
    //     temp->next = head;
    //     head->prev = temp;
    //     head = temp;
    // }

    // print
    Node *traverse = head;
    while (traverse)
    {
        cout << traverse->data << " ";
        traverse = traverse->next;
    }
    return 0;
}
