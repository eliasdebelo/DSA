#include <iostream>
using namespace std;

int main()
{
    int sum =0;
    int n;
    cout<<"Enter N:";
    cin>>n;
    for (int i=0; i <= n; i++)
    {
        sum = sum + i;      //sum += i
    }
    cout<<endl<<"Sum of "<<n<<" is: "<<sum<<endl;

    return 0;
}
