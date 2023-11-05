#include <iostream>
using namespace std;

int main()
{
    //Linear/Seq. search
    int numbers[] = {32, 22, 43, 65, 76, 88,65, 65, 100};

    //sizeof(int) = 4 bytes
    //sizeof(numbers) = 9 x 4

    int length = sizeof(numbers)/sizeof(int);
    int sear_key = 76;

    //assume, index was -1 (or say item not found)
    int key_index = -1;

    for (int i = 0; i < length; i++)
    {
        if (sear_key == numbers[i])
        {
            key_index = i;
        }
    }
    //Now, it is time to check if sear_key found (key_index value changed)

    if (key_index != -1){
        //Item found
        cout<<"Item found at index "<<key_index;
    }else{
        //item not found (key_index is still the same)
        cout<<"Item not found";
    }
}
