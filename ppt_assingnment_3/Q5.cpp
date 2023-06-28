/*
<aside>
💡 **Question 5**
You are given a large integer represented as an integer array digits, where each
digits[i] is the ith digit of the integer. The digits are ordered from most significant
to least significant in left-to-right order. The large integer does not contain any
leading 0's.

Increment the large integer by one and return the resulting array of digits.

**Example 1:**
Input: digits = [1,2,3]
Output: [1,2,4]

**Explanation:** The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

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

    for(int i=n-1; i>=0; i--) {
        if(i==n-1) {
            nums[i]=nums[i]+1;
        }
        if(nums[i]==10) {
            nums[i]=0;
            if(i!=0) {
                nums[i-1]=nums[i-1]+1;
            } else {
                nums[i]=1;
                nums.push_back(0);
            }
        }
    }
    for(int i=0; i<nums.size(); i++) {
        cout <<nums[i];
    }

    return 0;
}
//https://leetcode.com/problems/plus-one/submissions/882609437/
