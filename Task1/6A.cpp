#include <iostream>
using namespace std;
int main() 
{
    int n1, n2;
    int sum1, sum2;
    sum1=0;
    sum2=0;
    cin>>n1>>n2;
    for(int i=1;i<n1;i++){
        if(n1%i==0){
            sum1=sum1+i;
            cout<<i<<" "<<sum1<<endl;
        }   
    }   
    for(int i=1;i<n2;i++){
        if(n2%i==0){
            sum2=sum2+i;
            cout<<i<<" "<<sum2<<endl;
        }
    }

    if(sum1==n2 && sum2==n1){
        cout<<"AMICABLE NUMBERS";
    }
    else {
        cout<<"NOT AMICABLE";
    }
    return 0;
}