#include<iostream>
using namespace std;

int main()
{   
    string input="oregano";
    string *sptr;
    sptr=&input;
    cout<<input<<endl;
    cout<<sptr<<endl;
}