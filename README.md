# CipherSchools-Assignment
#include <iostream>
using namespace std;
int maxLoot(int *hval, int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return hval[0];
    if (n == 2)
        return max(hval[0], hval[1]);
    int dp[n];
    dp[0] = hval[0];
    dp[1] = max(hval[0], hval[1]);
    for (int i = 2; i<n; i++)
        dp[i] = max(hval[i]+dp[i-2], dp[i-1]);

    return dp[n-1];
}

int main()
{
    int number;
    cin>>number;
    int nums[number];
    for(int i=0;i<number;i++)
        cin>>nums[i];
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Maximum loot possible : "
         << maxLoot(nums, n);
    return 0;
}
