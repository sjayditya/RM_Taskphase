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
/*
 int main()
{
    int num,n,sum;
    cout<<"Enter the number ";
    cin>>n;
    num=n;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    cout<<num<<"\nSum of digits is "<<sum;
}*/