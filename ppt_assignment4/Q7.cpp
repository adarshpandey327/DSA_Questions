<aside>
💡 **Question 8**

Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

*Return the array in the form* [x1,y1,x2,y2,...,xn,yn].

**Example 1:**

**Input:** nums = [2,5,1,3,4,7], n = 3

**Output:** [2,3,5,4,1,7]

**Explanation:** Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

</aside>


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size=2*n;
        vector<int> a1;
        vector<int> a2;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            a1.push_back(nums[i]);
        }
        for(int i=n;i<size;i++)
        {
            a2.push_back(nums[i]);
        }
        for(int i=0;i<size;i++)
        {
            if(i%2==0)
            {
                ans.push_back(a1[i/2]);
            }
            else if(i==1)
            {
                ans.push_back(a2[0]);
            }
            else
            {
                ans.push_back(a2[i/2]); 
            }
        }

      return ans;  
    }
};

//https://leetcode.com/problems/shuffle-the-array/submissions/860348499/
