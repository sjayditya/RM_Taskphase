#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{   
    if (n==1)
    {
        return;
    }
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
        {
            int temp;
            temp=arr[i];
            arr[i] = arr[i+1];
            arr[i+1]=temp;
        }
    bubbleSort(arr, n-1);
}

void printarr(int arr[], int n)
{
    for (int i=0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

void sortAscending (int arr[], int l)
{
    int maxIndex=0, temp=0, index=0;
    for ( index=maxIndex; index<l; index++ )
    {
        if (arr[index]>arr[maxIndex])
        {
            maxIndex=index;
        }
    }
    temp=arr[l-1];
    arr[l-1]=arr[maxIndex];
    arr[maxIndex]=temp;

    if (l>1)
    {
        sortAscending(arr, --l);
    }
}
int main()
{   int l,n;
    cout<<"Enter the number of elements ";
    cin>>l;
    int arr[l];
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<l; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter b for bubble sort or s for selection sort:";
    string a;
    cin>>a;
    if(a=="b")
    {
        bubbleSort(arr, l);
        cout<<"Sorted array :\n";
        printarr(arr, l);
    }
    else if(a=="s")
    {
        sortAscending(arr,l);
        cout<<"Sorted array :\n";
        printarr(arr, l);
    }
    else
    cout<<"wrong input";
    return 0;
}