#include <iostream>
using namespace std;

int main()
{
	//What is pointer variable?
	//variable that holds memory address
	
	int var = 10;
	
	int *var_ptr; //integer pointer that holds address of any integer variable
	//& - is called reference operator in C++, tells us an address where value stored
	cout<<&var; //this displays and address (0x6ffe1c, might be d/t on your computer)
	
	//Now, we can freely save the address on variable or pointer variable
	var_ptr = &var; //nice. var_ptr =&var
	
	cout<<var_ptr;
	
	//We can use this power for better things
	//e.g. array name is a reference  by itself
	int array[4] = {4, 3, 1, 6};
	
	cout<<array[0]; //this displays 4
	
	cout<<array; //what about this? It displays address of the first element, 4.
	//Now, 
	
	cout<<&array[0]; //what is this? Well, it means 'show me address of array[0]'.
	
	//what if I can address the others? Simple
	
	cout<<array+2; // +2 is adding two integer's bytes => 2X4 = 8
	
	//Since array name is reference, I can directly assign it to a pointer variable
	
	int *array_ptr = array;
	
	cout<<array_ptr; //gives us, address of first element = array
	
	//if I want the value, I can use * operator called dereference operator
	
	cout<< *(array_ptr + 2); //this must give me 1, which is array[2]
	
	//Good.
	
    return 0;
}

