#include <iostream>
using namespace std;

const int MAX_SIZE = 5;
int top = -1;
int my_stack[MAX_SIZE];

void push(int value){
    if(top == MAX_SIZE-1){
        cout<<"\nStack is FULL/Overflow\n";
    }else{
        top++;
        my_stack[top] = value;
    }
}
void pop(){
    if(top >= 0){
        //top_value = my_stack[top]; backup if you want
        my_stack[top] = 0; //empty top stack space
        top--;
    }else{
        cout<<"stack is empty"<<endl;
    }
}
void display(){
    for (int i=0; i<=top; i++)
        cout<<my_stack[i];
    cout<<endl;
}
int main()
{
    push(3);
    push(5);
    push(7);
    push(1);

    display();

    pop();
    pop();
    display();

    return 0;
}
