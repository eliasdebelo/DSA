#include <iostream>
using namespace std;

const int MAX_SIZE = 7;
int my_queue[MAX_SIZE];
int QUEUE_SIZE = 0;
int FRONT = -1, REAR = -1;

void enqueue(int value)
{
    if(REAR < MAX_SIZE-1){
        REAR++;
        QUEUE_SIZE++;
        my_queue[REAR] = value;
        if (FRONT == -1)
            FRONT++;
    }else{
        cout<<"Queue is full"<<endl;
    }
}

int dequeue(){
    int x;
    if(QUEUE_SIZE == 0){
        cout<<"The queue is empty"<<endl;
    }else{
        x = my_queue[FRONT];
        FRONT++;
        QUEUE_SIZE--;
    }
    return x;
}

void display(){
    cout<<"Queue Size "<<QUEUE_SIZE<<endl;
    cout<<"REAR "<<REAR<<endl;
    cout<<"FRONT "<<FRONT<<endl;
    for(int i=FRONT; i<=REAR; i++)
        cout<<my_queue[i]<<" ";
    cout<<endl;
}
int main()
{
    for(int i=1; i<15;){
        enqueue(i);
        i += 2;
    }
    display();

    dequeue();
    dequeue();

    display();
	
	//this result in queue if full
	enqueue(18);
	display();

    return 0;
}
