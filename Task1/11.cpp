#include <iostream>
using namespace std;
int binarySearch(int arr[], int p, int r, int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}

int main(void) {
    int l,n;   
    cin>>l;
    int arr[l];
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<l; i++)
    {
        cin>>arr[i];
    }
    int num;
    cout << "Enter the number to search: \n";
    cin >> num;
    int index = binarySearch (arr, 0, l-1, num);
    if(index == -1){
        cout<< num <<" is not present in the array";
    }else{
        cout<< num <<" is present at index "<< index <<" in the array";
    }
    return 0;
}