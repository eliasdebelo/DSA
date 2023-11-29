#include <iostream>
using namespace std;

struct Node{
	int value;
	Node *next;
};

//assuming we don't have any node in the list
Node *head = NULL; 


void addingNodeToEnd(int val)
{
	Node *new_node = new Node;
	new_node->value = val;
	new_node->next = NULL; 
	
	if (head == NULL)
		head = new_node;
	else{
		Node *temp = head;
		//we know that if temp->next = NULL, temp is going to be the last node
		while (temp->next != NULL){
			temp = temp->next;
		}
		temp->next = new_node;		
	}
}

void displayALL()
{
	Node *temp = head;
	cout<<endl;
	while (temp != NULL){
		cout<<temp->value<<" ";
		temp = temp->next;
	}	
	cout<<endl;
}

void deleteFromEnd()
{
	Node *temp_pr, *ptr = head;
	while(ptr->next != NULL)
	{
		temp_pr = ptr;
		ptr = ptr->next;
	}
	//Now, ptr->next is null
	//and temp_pr->next is ptr
	
	//modify before deleting
	temp_pr->next = ptr->next;
	delete ptr;
}

int main(int argc, char** argv) 
{

	for (int i = 1; i <= 50; i++){
		//just even numbers
		if (i%2 == 0)
			addingNodeToEnd(i);
	}
	cout<<"\nOriginal\n";
	displayALL();
	//
	deleteFromEnd();
	//
	cout<<"\nModified\n";
	displayALL();
	
	return 0;
}