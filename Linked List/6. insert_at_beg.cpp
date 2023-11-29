#include <iostream>
using namespace std;

struct Node{
    int value;
    Node *next;
};
Node *head = NULL;

void addNodeEnd(int temp_val)
{
    Node *temp = new Node;
    temp->value = temp_val;
    temp->next = NULL;

    if (head == NULL){
        head = temp;
    }else{
        //traverse through the list then append to the last
        Node *ptr = head;
        while (ptr->next != NULL){
            ptr = ptr->next; //advance ptr
        }
        //we have reached at the end of the list
        ptr->next = temp;
    }
}

void disp()
{
        Node *tr = head;
    while (tr != NULL){
        cout<<tr->value<<" ";
        tr = tr->next;
    }
}
int main()
{
    //adding node to the end
    for (int i=1; i<50;)
    {
        addNodeEnd(i);
        i += 5;
    }
    disp();

    //adding to the beg.
    Node *beg = new Node;
    beg->value = 0;
    beg->next = head;
    head = beg;

    disp();
        //

    return 0;
}
