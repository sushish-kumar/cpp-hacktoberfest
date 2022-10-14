#include<bits/stdc++.h>
using namespace std;


void permo(int ind, vector<int> &v, int n){
    if(ind==n){
        for(auto it : v){cout<<it<<" ";}
        cout<<endl;
    }

    for(int i=ind; i<n; i++){
        swap(v[ind],v[i]);
        permo(ind+1, v, n);
        swap(v[ind],v[i]);
    }
}

int main(){
    vector<int> v={1,2,3};
    vector<int> ans;
    int n=v.size();
    permo(0,v,n);
    return 0;
}