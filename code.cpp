#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int dp[n+1];
     dp[0] = 1;
    for(int i=1;i<=n;i++){
        dp[i] = ((i-1)>=0 ? dp[i-1] : 0) +
                ((i-2)>=0 ? dp[i-2] : 0) +
                ((i-3)>=0 ? dp[i-3] : 0);
    }
    cout<<dp[n];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
