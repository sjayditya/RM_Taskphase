#include <iostream>
using namespace std;
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return (n%10+sum(n/10));
    }
}

int main()
{
    int n;
    cout<<"Enter the number to find sum of digits of: ";
    cin>>n;
    cout<<"sum is "<<sum(n);
    return 0;
}
