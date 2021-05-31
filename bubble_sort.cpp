#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,swap1=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)// checking each element
    {
        for(int j=0;j<n-1-i;j++) //checking the each element with the next element
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]); //swaping if the number
                swap1=1;
            }
        }
        if(swap1==0) //checking there is swap occur  first pass
        {
            break; // the array is already sorter 
        }
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
