#include<bits/stdc++.h>
using namespace std;

void subseq(int a, vector<int> &v, int arr[], int n){
    if(a==n){
        for(auto it: v){
            cout<<it<<" ";
        }
        if(v.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //take or pick the particular index into the subsequence
    v.push_back(arr[a]);
    subseq(a+1, v, arr, n);
    v.pop_back();

//not pick, or not take condition, this element is not added to your subsequence
subseq(a+1, v, arr, n);
}

int main(){
    cout<<" Enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements:"<<endl;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    cout<<"The following subsequences are as follows:"<<endl;
    vector<int> v;
    subseq(0,v, arr, n);


}