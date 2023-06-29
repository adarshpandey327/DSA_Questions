/*
<aside>
💡 **Question 6**
Given an integer array nums sorted in **non-decreasing** order, return *an array of **the squares of each number** sorted in non-decreasing order*.

**Example 1:**

Input: nums = [-4,-1,0,3,10]

Output: [0,1,9,16,100]

**Explanation:** After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100]

</aside>
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
    vector<int>ans(n,0);
    int r=n-1;
    int l=0;
    int index=n-1;
    while(l<=r) {
        if(pow(nums[l],2)>pow(nums[r],2)) {
            ans[index]=pow(nums[l],2);
            l++;
            index--;
        } else {
            ans[index]=pow(nums[r],2);
            r--;
            index--;
        }
    }
    for(int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }




    return 0;
}
//https://leetcode.com/problems/squares-of-a-sorted-array/submissions/982649424/
