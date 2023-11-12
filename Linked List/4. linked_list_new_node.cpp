#include <iostream>
using namespace std;

struct Node{
	int value;
	Node *next;
};

//assuming we don't have any node in the list
Node *head = NULL; 
//We made it global, just to access it throught our functions


void addingNodeToEnd(int val)
{
	Node *new_node = new Node;
	new_node->value = val;
	new_node->next = NULL; //we are adding to the last
	/*
		you can check if the list is empty
	*/
	
	//in order to append to the last, we need to find where end of list
	
	Node *temp = head; //start from initial
	
	//we know that if temp->next = NULL, temp is going to be the last node
	while (temp->next != NULL){
		temp = temp->next;
	}
	//Here, we have reached the last
	//make the new_node the last
	temp->next = new_node;
}

void displayALL()
{
	Node *temp = head;
	cout<<"Here is the list"<<endl;
	while (temp != NULL){
		cout<<temp->value<<" ";
		temp = temp->next;
	}	
}

int main(int argc, char** argv) 
{
	//Appending a new node to the end of the list
	Node *node_1 = new Node;
	node_1->value = 1;
	node_1->next = NULL; //it is the last node, remember?
	
	//but, check if we have empty list so far
	if (head == NULL)
		head = node_1;
	//Now, try
	//cout<<head->value; //will give us 1
	
	//Shall we create more of them???? Ok
	for (int i = 2; i < 20; )
	{
		addingNodeToEnd(i);
		
		i += 3; //just increment by 3
	}
	
	//You want to see them?
	displayALL();
	
	return 0;
}