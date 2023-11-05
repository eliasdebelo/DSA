#include <iostream>
using namespace std;

int main()
{
    //Lets modify, this search in order to capture
    //all search keys found in the list.

    int numbers[] = {32, 22, 43, 65, 76, 88,65, 65, 100};
    int length = sizeof(numbers)/sizeof(int);
    int sear_key = 43;

    //lets have another storage for all found item indices
    int seachIndices[length];

    //initialize them to -1, assuming no search keys found, yet
    for (int i=0 ;i<length; i++)
    {
        seachIndices[i] = -1;
    }

    //Search all of them, save index (if item found)
    for (int i = 0; i < length; i++)
    {
        if (sear_key == numbers[i])
        {
            seachIndices[i] = i;
        }
    }

    //not lets display found key indices
    for (int i=0 ;i<length; i++)
    {
        if (seachIndices[i] != -1){
            cout<<seachIndices[i]<<" ";
        }
    }

    return 0;
}

