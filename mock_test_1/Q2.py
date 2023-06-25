""" 
First Unique Character in a String

Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:
Input: s = "leetcode"
Output: 0

Example 2:
Input: s = "loveleetcode"
Output: 2

Example 3:
Input: s = "aabb"
Output: -1

Constraints:
a. 1 <= s.length <= 10^5
b. s consists of only lowercase English letters.
"""
#solution->
from collections import Counter
class Solution:
    def firstUniqChar(self, s: str)->int:
        a = Counter(s)
        # print(a)
        for i in range(0,len(s)):
            if(a[s[i]]==1):
                return i
        return -1
        
c = Solution()
s = "aabb"
a = c.firstUniqChar(s)
print(a) 

w = "loveleetcode"
x = c.firstUniqChar(w)
print(x)

