#include <iostream>
using namespace std;

struct Node{
	int value;
	Node *ptr;
};
int main(int argc, char** argv) 
{
	/* 
	Having the power of pointers and structure (class) - aggregate data types,
	we can create separate object with self-referring pointer (call them nodes) 
	and link them to one another
	that create A list of linked nodes, called Linked List
	
	Now, add pointer of type Node as a data member
	Node *ptr; 
	*/
	
	/*	
	struct Node{
		int value;
		Node *ptr;
	};
	
	Now, this structure has a pointer and value.
	The value holds integer data, 
	while the ptr can hold address of variable of type Node.
	*/

	//we can create one Node, of type Node in order to 
	//access both data members and pointer variable
	
	Node *head = new Node;
	//This create a head (like box) containing value and ptr
	//we will use -> operator
	
	head->value = 30;
	head->ptr = NULL;	// or nullptr - null pointer
						//which usually, zero or unused space
	
	//Now, remember 'head' is a node.
	//what is it try to display head?
	
	cout<<head; //This will give us address of the node itself.
	
	//Here is where the good thing comes,
	//why not we use head->ptr to address of another node.
	//It mean we able create connected nodes
	
	//here
	Node *another_node = new Node;
	another_node->value = 40;
	another_node->ptr = NULL;	
	
	//Link them this way
	head->ptr = another_node; //coooool
	//Imagine creating 100 nodes and connect them this way
	
	
	cout<<"Address head: "<<head<<endl;
	cout<<"Address another node: "<<head->ptr;
	//
	
	//Now, we are all good.
	//Rename 'ptr' to 'next', which actually make sense.
	
	return 0;
}