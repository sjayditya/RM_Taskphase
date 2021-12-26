#include <iostream>
using namespace std;

int fib(int n, int t1, int t2);
 
int main()
{  
    cout<<fib(40,0,1);
}

int fib(int n, int t1, int t2)
{
    cout<<t1<<" ";
    if(n==0)
    {
        return t1+t2;
    }
    else{
        fib(n-1,t2,t1+t2);
    }
}