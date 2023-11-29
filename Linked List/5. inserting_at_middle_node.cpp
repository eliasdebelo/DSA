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
}

int main(int argc, char** argv) 
{

	for (int i = 1; i <= 50; i++){
		//just even numbers
		if (i%2 == 0)
			addingNodeToEnd(i);
	}
	
	//You want to see them?
	cout<<"\nOriginal\n";
	displayALL();
	
	
	//Let us insert node at index 10
	//or whereever we want, like just between 14 and 16
	
	Node *middle = new Node;
	middle->value = 15;
	//lets try the second.
	Node *ptr = head;
	Node *pr;
	
	while (ptr->value < 16){
		pr = ptr;
		ptr = ptr->next;
	}
	pr->next = middle;
	middle->next = ptr;
	
	//then display
	cout<<"\n\nModified List";
	displayALL();
	
	return 0;
}