#include <iostream>
using namespace std;

struct Node{
	int value;
};
int main(int argc, char** argv) 
{
	//if we able hold an address of primitive variables using pointers;
	//we can hold, and address custom/user defined data types like structures, classes
	
	int x = 8;
	int *int_ptr = &x;
	//now we can say the same thing using structure
	Node n;
	n.value = 8;
	Node *node_ptr = &n;
	
	//lets make it array
	Node nodes[2] = {10, 20};
	
	Node *array_ptr = nodes; //no need for &
	
	cout<<array_ptr<<" "<<array_ptr+1; //gives us andress of first and second elements
	//which is 0x6ffde0 0x6ffde4. See, it is 4 bytes difference
	
	//what if structure has another data members like, string name...?
	//the size of required/reserved memory increases.
	
	//Play with these.
	return 0;
}