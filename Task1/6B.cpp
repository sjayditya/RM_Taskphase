#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}


void selectionsort(int arr[], int n){

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}

void binarysearch(int arr[], int n1, int n)
{
    int low=0;
    int high=n-1;
    int mid,pos;
    int flag=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==n1)
        {
            flag=1;
            pos=mid+1;
            break;
        }
        if(n1<arr[mid])
        {
            high=mid-1;
        }
        if(n1>arr[mid])
        {
            low=mid+1;
        }
        if(low>high)
        {
            flag=0;
        }
    }
    if(flag=1)
    {
        cout<<"the element was found at position "<<pos;
    }
    else
    {
        cout<<"element not found";
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements for the array"<< endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements\n";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter b for bubble sort and s for selection sort: "<<endl;
    string c;
    cin>>c;

    if(c=="b"){
        bubblesort(arr,n);
    }
    else if(c=="s") {
        selectionsort(arr,n);
    }

    int n1;
    cout<<"Enter the number to search\n";
    cin>>n1;
    
    binarysearch(arr,n1,n);

    return 0;
}