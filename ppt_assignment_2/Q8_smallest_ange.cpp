/*
Question 8
You are given an integer array nums and an integer k.

In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.

The score of nums is the difference between the maximum and minimum elements in nums.

Return the minimum score of nums after applying the mentioned operation at most once for each index in it.

Example 1:
Input: nums = [1], k = 0
Output: 0

Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array" <<endl;
    int n;
    cin >> n;
    vector<int>nums(n);
    cout << "Enter array elements" << endl;
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    int k;
    cout <<"Enter the k: "<<endl;
    cin>>k;
    sort(nums.begin(),nums.end());
    int max=nums[nums.size()-1];
    int min=nums[0];
    int ans=max-min;
    for(int i=1; i<=(2*k); i++) {
        if(ans==0) {
            cout <<ans ;
            return 0;
        } else {
            ans=ans-1;
        }
    }
    cout <<ans;

    return 0;
}
//leetcoed->https://leetcode.com/problems/smallest-range-i/submissions/979443283/
