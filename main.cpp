#include <iostream>
using namespace std;
struct solutions
{int missing(int nums[],int n)
    {
    int total=0;
    int sum;
        sum=n*(n+1)/2;
        for(int i=0;i<n;i++)
            total=total+nums[i];
        return sum-total;
    }};
int main() {
    solutions s;
    int missing;
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    cin>>nums[i];
    missing=s.missing(nums,n);
    cout<<missing;
    return 0;}
