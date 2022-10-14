#include <bits/stdc++.h>
using namespace std; 

vector<int> NGE(vector<int> v){
    vector<int> nge(v.size());
    stack<int> st;
    for(int j = 0; j <v.size(); ++j){
        while(!st.empty() && v[j] > v[st.top()] ){
            nge[st.top()]=j;
            st.pop();
        }
        st.push(j);
    }
    while(!st.empty()){
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;

}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i){
        cin>>v[i];
    }
    vector<int> nge = NGE(v);
    for(int j=0; j<n; ++j){
        cout<<v[j]<<" "<< (nge[j] == -1 ? -1 : v[nge[j]])<<endl;
    }


}

