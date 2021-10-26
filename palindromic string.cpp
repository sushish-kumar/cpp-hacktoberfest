#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string palindrom;
cin>>palindrom;
string rev;
rev=palindrom;
reverse(rev.begin(),rev.end());
if(rev==palindrom){
    cout<<"YES";
}
else{
    cout<<"NO";
}
retun 0;
}
