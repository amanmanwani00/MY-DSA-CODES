#include<bits/stdc++.h>
using namespace std;
int ans(int n,int arr[],int key)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[0]==key)
    {
        return 0;
    }
    int i= ans(n-1,arr+1,key);
    if(i==-1)
    {
        return -1;
    }else
    return i+1;
}
int main ()
{
    int n,arr[100],key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    cout<<ans(n,arr,key)<<endl;
    return 0;
}