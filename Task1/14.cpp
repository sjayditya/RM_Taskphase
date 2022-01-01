#include <iostream>
using namespace std;
 
int main()
{
    int n1,n2,r,num,den;
    cout<<"Enter the numbers ";
    cin>>n1>>n2;
    if (n1>n2)
    {
        num=n1;
        den=n2;
    }
    else
    {
        num=n2;
        den=n1;
    }
//    cout<<num<<" "<<den;
    r=num%den;
    if (r==0)
    {
        cout<<"GCD is "<<den;
    }
    else
    {
        while(r!=0)
        {
        r=num%den;
        num=den;
        den=r;
        }
    cout<<"GCD is "<<num;
    }
    
//    cout<<num<<" "<<den;
    
    return 0;
}