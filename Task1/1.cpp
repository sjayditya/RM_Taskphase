#include <iostream>
using namespace std;

int main(){
    string arr5;
    int n;
    char temp;
    cin>>arr5;
    n=arr5.length();
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(arr5[j-1]>arr5[j])
            {
                temp=arr5[j-1];
                arr5[j-1]=arr5[j];
                arr5[j]=temp;
            }
        }
    }
    cout<<arr5;

    return 0;
}


 