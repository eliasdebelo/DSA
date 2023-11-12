#include <iostream>
#include <string>

using namespace std;

struct Person{
    string name;
    int age;
};

void swaper(Person person[], int i, int j){
    Person temp = person[i];
    person[i] = person[j];
    person[j] = temp;
}

int main()
{
    //Insertion Sorting
    Person person[4];

    for (int i=0; i<4; i++)
    {
        cout<<"Person "<<i+1<<" name:";
        cin>>person[i].name;
        cout<<"Person "<<i+1<<" age:";
        cin>>person[i].age;
    }

    //sort by name
    for (int i=1; i<4; i++)
    {
        int j = i;
        bool found = false;
        while ((j>0) && (found == false))
        {
            if (person[j].name < person[j-1].name){
                swaper(person, j, j-1);
            }else{
                found = true;
            }
            j--;
        }
    }

    for (int i=0; i<4; i++)
    {
        cout<<person[i].name;
    }
    return 0;
}
