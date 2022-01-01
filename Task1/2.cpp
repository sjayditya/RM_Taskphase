#include<iostream>
#include<math.h>
using namespace std;

int main()
{   
    int n1,m1,i,j;
    cout<<"Enter rows matrix 1:";
    cin>>n1;
    cout<<"Enter columns matrix 1:";
    cin>>m1;

    int arr1[n1][m1];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            cin>>arr1[i][j];
        }
        
    }
    cout<<"\n"<<"matrix 1 is"<<"\n";
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }

    int n2,m2;
    cout<<"Enter rows matrix 2:";
    cin>>n2;
    cout<<"Enter columns matrix 2:";
    cin>>m2;

    int arr2[n2][m2];
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            cin>>arr2[i][j];
        }
    }
    
    cout<<"\n"<<"matrix 2 is"<<"\n";
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }
    int prdc[n2][m1];
    for(i=0; i<n1; ++i)
        for(j=0; j<m2; ++j)
        {
            prdc[i][j]=0;
        }

    for(i = 0; i<n1; ++i)
        for(j = 0; j<m2; ++j)
            for(int k=0; k<m1; ++k)
            {
                prdc[i][j] += arr1[i][k] * arr2[k][j];
            }

    cout<<"\n"<< "Output Matrix: "<< endl;
    for(i = 0; i<n1; ++i)
    for(j = 0; j<m2; ++j)
    {
        cout<<" "<<prdc[i][j];
        if(j==m2-1)
            cout<<endl;
    }
    return 0;
}