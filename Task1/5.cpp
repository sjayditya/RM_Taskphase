#include <iostream>
using namespace std;

void binary(int n)
{
    int bin[64];
    int r;
    int i;
    i=0;
    while(n>0)
    {   
        r=n%2;
        bin[i]=r;
        n=n/2;
        i++;
    }
    
    for (int j=i-1; j>=0; j--)
    {
        cout<<bin[j];
    }



}    
int main(){
    int n;
    cout<<"Enter the number to be converted"<<endl;
    cin>>n;
    
    binary(n);
    return 0;
}