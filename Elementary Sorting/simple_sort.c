#include <iostream>
using namespace std;

void swaper(int numers[], int i, int j){
    int temp = numers[i];
    numers[i] = numers[j];
    numers[j] = temp;
}

int main()
{
    //Simple Sorting
    int numbers[] = {32, 22, 43, 65, 76, 88,65, 65, 100};
    int length = sizeof(numbers)/sizeof(int);

    //sorting requires you to take first item compare and swap with
    //the others and continues
    for (int i = 0; i < length-1; i++)
    {
        for (int j = i+1; j < length; j++){
            //compare
            if (numbers[i] > numbers[j])
            {
                //passing by references (array name)
                swaper(numbers, i, j);
            }
        }
    }
    //display
    for (int i=0; i<length; i++)
        cout<<numbers[i]<<" ";


    return 0;
}

