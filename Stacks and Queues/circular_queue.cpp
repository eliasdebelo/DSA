#include <iostream>
#include <string>
using namespace std;

const int MAX = 5;
int QUEUESIZE = 0;
int FRONT = -1;
int REAR = -1;
int array[MAX];

void display(){
	for (int c=0; c<MAX; c++){
		cout<<array[c]<<" ";
	}
	cout<<endl;
}

void dispData(){
	cout<<"QUEUE SIZE: "<<QUEUESIZE<<endl;
	cout<<"FRONT: "<<FRONT<<endl;
	cout<<"REAR: "<<REAR<<endl;	
	display();
}

void enqueue(int x){
	if (QUEUESIZE != MAX){
		REAR = (REAR + 1) % MAX;
		array[REAR] = x;
		QUEUESIZE++;
		//
		if (FRONT == -1)
			FRONT++;
	}else{
		cout<<"Queue Overflow"<<endl;
	}
	dispData();
}

int dequeue(){
	int r;
	if (QUEUESIZE != 0){
		r = array[FRONT];
		array[FRONT] = 0;
		if (FRONT == REAR)
			FRONT = REAR = -1;
		else
			FRONT = (FRONT + 1) % MAX;
		QUEUESIZE--;
	}else{
		cout<<"Queue Underflow"<<endl;
	}
	dispData();
}


int main(int argc, char** argv) 
{
	enqueue(5);
	enqueue(2);
	dequeue();
	enqueue(7);
	dequeue();
	enqueue(8);
	enqueue(9);
	enqueue(3);
	enqueue(1);
	
	enqueue(6);//Queue Overflow here
	//
	
	return 0;
}
