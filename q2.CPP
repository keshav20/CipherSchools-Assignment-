#include <bits/stdc++.h>
using namespace std;
int solution(vector<int>& arr, int t)
{
    int csum = INT_MAX;
    for (int i = 0; i < arr.size() ; i++) 
    {
        for(int j =i + 1; j < arr.size(); j++)
        {
            for(int k =j + 1; k < arr.size(); k++)
            {
                if(abs(t - csum) > abs(t - (arr[i] + arr[j] + arr[k])))
                {
                    csum = (arr[i] + arr[j] + arr[k]);
                }
            } 
        }
    }
    return csum;
}
int main()
{
    vector<int> arr = { -1, 2, 1, -4 };
    int x = 1;
    cout << solution(arr, x);
    return(0);
}
