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
        cout <<traverse->data<<endl;
        traverse = traverse->next;
    }
    return 0;
}
