#include<bits/stdc++.h>
using namespace std;
int Moorealgo(int arr[],int n)
{
    int index=0;
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(arr[index]==arr[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
        if(cnt==0)
        {
            cnt=1;
            index=i;
        }


    }
       return arr[index];

}
bool ismajority(int ans,int arr[],int n)
{
    int cmt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ans)
        {
            cmt++;
        }
    }
    if(cmt>n/2)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout<<"Enter number of elements to entered"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  int ans=Moorealgo(arr,n);
    if(ismajority(ans,arr,n))
    {
        cout<<"Majority element found and the element is "<<ans;
    }
    else
    {
        cout<<"Not found";
    }
}
//Space Complexity:O(n)
//Time complexity:O(n);
