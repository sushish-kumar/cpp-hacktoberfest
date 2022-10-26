/*
Depth First Traversal (or Search) for a graph is similar to Depth First Traversal of a tree. 
The only catch here is, that, unlike trees, graphs may contain cycles (a node may be visited twice). To avoid processing a node more than once, use a boolean visited array. A graph can have more than one DFS traversal.
*/

#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int>v[],int m,int n){
    v[m].push_back(n);
    v[n].push_back(m);
}
void DFSrec(vector<int>v[],int source,bool visited[]){
    visited[source]=true;
    cout<<source<<" ";
    for(int i=0;i<v[source].size();i++){
        if(visited[v[source][i]]==false){
            DFSrec(v,v[source][i],visited);
        }
    }
}
//Function of DFS Algorithm 
void DFS(vector<int>v[],int n,int source){
    bool visited[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    DFSrec(v,source,visited);
    
}
int main(){
    vector<int> v[5];
    addEdge(v,0,1);
    addEdge(v,1,4);
    addEdge(v,0,2);
    addEdge(v,2,3);
    addEdge(v,1,3);
    addEdge(v,3,4);
    addEdge(v,1,4);
    DFS(v,5,0);
    return 0;
}