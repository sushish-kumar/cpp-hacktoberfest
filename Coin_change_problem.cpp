//Deepak Rathore
//IIITDM kurnool

// Problem Statement: Total no. of ways to change a amount(k) using the coins given (infinite supply of a coin is considered)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;                    // n is no. of coins, k is required total amount
    cin>>k>>n;
    int arr[n];                 // array of coins available
    for(int i=0;i<n;i++)
        cin>>arr[i];
    long long int dp[n][k+1];   // dp[i][j] stores no. of ways to change amount j, if coins from 0...i-1 of arr are available to us
    for(int i=0;i<n;i++) {
        dp[i][0]=1;
    }
    for(int i=0;i<=k;i++) {     // if 1 coins is available
        if(i%arr[0]==0)
            dp[0][i]=1;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=k;j++) {
            if(j>=arr[i])       // if one more coin[i] is taken
                dp[i][j]=dp[i][j-arr[i]]+dp[i-1][j];
            else                // if none of coin[i] is taken
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n-1][k];           // total no of ways to change amount k
}
// T=O(n*k)
// S=O(n*k)
