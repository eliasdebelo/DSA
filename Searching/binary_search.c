#include <iostream>
using namespace std;

int main()
{
    //Binary Searching - List should be sorted in asc order
    int numbers[] = {3, 9, 11, 14, 19, 23, 60, 76, 88};
    int sear_key = 76;
    int length = sizeof(numbers)/sizeof(int);

    //Keep dividing the problem into halves, till you find
    //the search key or till you become sure item does not exist at all

    //lets initialize pointers
    int top = length - 1;
    int bottom = 0;
    int found_item_index = -1;

    while (top > bottom)
    {
        int middle = (top + bottom) / 2;

        //check if item is at the middle
        if (sear_key == numbers[middle])
        {
            found_item_index = middle;
            break; //let stop here, since we found it
        }

        if (sear_key < numbers[middle])
        {
            //looking for a number which less than the middle item
            top = middle - 1;
            //and bottom is the same
        }
        else
        {
            //we are looking for number greater than middle item
            bottom = middle + 1;
            //top stays the same
        }
    }
    //Now, lets check if we found it
    if (found_item_index != -1){
        cout<<"Good, the item found at index of "<<found_item_index;
    }else{
        cout<<"Unfortunate, the item not found";
    }

    return 0;
}
