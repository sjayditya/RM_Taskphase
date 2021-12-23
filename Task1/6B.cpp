#include <iostream>

using namespace std;
void bubblesort(int num[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
        }
    }

    for(int k=0;k<n;k++)
    {
        cout<<num[k];
    }

}
void selectionsort(int num[],int n)
{
    int mini,pos,t;
    for(int i=0;i<n-1;i++)
    {
        mini=num[i];
        pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(num[j]<mini)
            {
                mini=num[j];
                pos=j;
            }
        }
        t=num[i];
        num[i]=mini;
        num[pos]=t;
    }
    for(int k=0;k<n;k++)
    {
        cout<<num[k];
    }

}
void search(int num[],int n,int l)
{
    int low=0,high=l-1,mid,pos;
    bool p=false;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(num[mid]==n)
        {
            p=true;
            pos=mid+1;
            break;
        }
        if(n<num[mid])
        {
            high=mid-1;
        }
        if(n>num[mid])
        {
            low=mid+1;
        }
        if(low>high)
        {
            p=false;
        }
    }
    if(p)
    {
        cout<<"the number is present in "<<pos<<" position"<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }
}
int main()
{
    int n,n1;
    cout << "Enter the number of elements of the array" << endl;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element "<<endl;
        cin>>num[i];
    }
    cout<<"Enter b for bubble sort and s for selection sort: "<<endl;
    char c;
    cin>>c;
    switch(c)
    {
        case 'b': bubblesort(num,n);
               break;
        case 's': selectionsort(num,n);
               break;
        default:cout<<"Invalid input"<<endl;
    }
    cout<<endl<<"Enter the number to be searched :"<<endl;
    cin>>n1;
    search(num,n1,n);
    return 0;
}