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

int
main()
{

    Node *head = NULL;

    //create Array 
    int arr[] = {1,2,3,4,5};
    Node *tail = NULL;

    for(int i=0;i<5;i++)
    {
        if(head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        else
        {
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp ->prev = tail;
            tail = temp;

        }
    }

    // Linked List does not exist 
    if(head == NULL)
    {
        head = new Node (5);
    }
    //Allready Exist
    else
    {
        Node *temp = new Node (5);
        temp ->next = head;
        head ->prev = temp;
        head = temp;
    }


    //print 
    Node *traverse = head;
    while(traverse)
    {
        cout <<traverse->data<<" ";
        traverse = traverse->next;
    }
    return 0;
}

