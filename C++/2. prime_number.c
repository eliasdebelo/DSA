#include <iostream>
using namespace std;

int main()
{
    int sum =0;
    int n;
    cout<<"Enter N:";
    cin>>n;

    //prime number is a number divisible by one and itself
    //e.g. 1, 2, 3, 5, 7, 11
    bool isPrime = true;
    for (int i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout<<"yes, "<<n<<" is prime";
    else
        cout<<"No, "<<n<<" not is prime";

    return 0;
}
