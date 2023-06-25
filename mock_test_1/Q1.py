""" Move Zeroes
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]

Constraints:
a. 1 <= nums.length <= 10^4
b. -2^31 <= nums[i] <= 2^31 - 1 """

#solution-> two pointer approch
class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        i = 0
        for j in range(0,len(nums)):
            if(nums[j]==0):
                pass
            elif(nums[j]!=0):
                nums[j],nums[i] = nums[i],nums[j]
                i+=1
        

a = Solution()
b = [0,1,0,3,12]
a.moveZeroes(b)
print(b)
