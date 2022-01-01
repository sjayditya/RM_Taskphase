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

void octal(int n)
{
    int oct[64];
    int r;
    int i;
    i=0;
    while(n>0)
    {   
        r=n%8;
        oct[i]=r;
        n=n/8;
        i++;
    }
    
    for (int j=i-1; j>=0; j--)
    {
        cout<<oct[j];
    }
}

void hexal(int n)
{
    string hex[64];
    int r;
    int i;
    i=0;
    while(n>0)
    {   
        r=n%16;
        if(r==10)
        {
            hex[i]=hex[i]+"A";
        }
        else if(r==11)
        {
            hex[i]=hex[i]+"B";
        }
        else if(r==12)
        {
            hex[i]=hex[i]+"C";
        }
        else if(r==13)
        {
            hex[i]=hex[i]+"D";
        }
        else if(r==14)
        {
            hex[i]=hex[i]+"E";
        }
        else if(r==15)
        {
          hex[i]=hex[i]+"F";
        }
        else
        {
            hex[i]=hex[i]+to_string (r);
        }
        n=n/16;
        i++;
    }
    
    for (int j=i-1; j>=0; j--)
    {
        cout<<hex[j];
    }
}
   
int main(){
    int n;
    cout<<"Enter the number to be converted"<<endl;
    cin>>n;
    cout<<"binary ";
    binary(n);
    cout<<"\n"<<"octal ";
    octal(n);
    cout<<"\n"<<"hexal ";    
    hexal(n);
    return 0;
}