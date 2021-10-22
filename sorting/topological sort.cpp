#include<bits/stdc++.h>
using namespace std;
void topo(int node,stack<int>&st,vector<int>&vis,vector<int>adj[])
{
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            topo(it,st,vis,adj);
        }
    }
    st.push(node);
}
int main()
{
    int n,m;
    cout<<"Enter vertices";
    cin>>n;
    cout<<"Enter edges";
    cin>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int>vis(n,0);
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            topo(i,st,vis,adj);
        }
    }
    vector<int>v;
    while(!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
