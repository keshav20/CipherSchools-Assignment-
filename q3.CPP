#include <iostream>
using namespace std;
int maxamt(int *val, int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return val[0];
    if (n == 2)
        return max(val[0], val[1]);
 
    int dp[n];
 
    dp[0] = val[0];
    dp[1] = max(val[0], val[1]);
 
    for (int i = 2; i<n; i++)
        dp[i] = max(val[i]+dp[i-2], dp[i-1]);
 
    return dp[n-1];
}
 
int main()
{
    int val[100], n;
    cout<<"ENTER SIZE OF ARRAY: "<<endl;
    cin>>n;
    cout<<"ENTER THE ARRAY VALUES:"<<endl;
    for(int j=0;j<n;j++)
    {
        cin>>val[j];
    }    
    cout << "Maximum Amount possible : "<< maxamt(val, n);
    return 0;
}
