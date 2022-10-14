#include<bits/stdc++.h>
using namespace std;

void forSum(int ind, vector<int> &v, int s, int sum, int arr[], int n){
    if(ind==n){
        if(s==sum){
            for(auto it : v) cout<<it<<" ";
            cout<<endl;
        }
        return;
        //if we want that any of such 1 to print then we can do
        //return true; in case if found
    }
    v.push_back(arr[ind]);
    s += arr[ind];

    forSum(ind+1, v, s, sum, arr, n);
    //if(forSum(ind+1, v, s, sum, arr, n); == true) { return true;}

    s-= arr[ind];
    v.pop_back();

    // not pick
    forSum(ind+1, v, s, sum, arr, n);
    //if(forSum(ind+1, v, s, sum, arr, n); == true) { return true;}

    //return false;
}

int main(){
    int arr[] = {1,2,1};
    int n=3;
    int sum=2;
    vector<int> v;
    forSum(0, v, 0, sum, arr, n);
    return 0;
}