#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,rem,sum=0,temp;
    cin>>n;

    temp = n;

    while (n != 0)
    {
        rem = n%10;
        sum = sum + pow(rem,3);
        n = n/10;
    }

    if (temp == sum)
    {
        cout<<"The number is a armstrong number"<<endl;
    }
    else
    {
        cout<<"The number is not a armstrong number"<<endl;
    }
    
    
    
}