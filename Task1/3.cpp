#include<iostream>
using namespace std;

int main()
{   
    
    int n,m,i,j;
    cout<<"Enter rows ";
    cin>>n;
    cout<<"Enter columns ";
    cin>>m;

    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"\n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }




    bool row[n];
    bool col[m];
    for (i=0; i<n; i++)
    {
    row[i]=0;
    }

    for (i=0; i<m; i++)
    {
    col[i]=0;
    }
 

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (arr[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }


    for (i=0; i<n; i++)
    {
        for (j = 0; j<m; j++)
        {
            if ( row[i]==1 || col[j]==1 )
            {
                arr[i][j]=0;
            }
        }
    }

        cout<<"\n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}  