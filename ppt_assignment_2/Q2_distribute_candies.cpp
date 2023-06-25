/*Question 2
Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started to gain weight, so she visited a doctor. 

The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice likes her candies very much, and she wants to eat the maximum number of different types of candies while still following the doctor's advice. 

Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she only eats n / 2 of them.

Example 1:
Input: candyType = [1,1,2,2,3,3]
Output: 3

Explanation: Alice can only eat 6 / 2 = 3 candies. Since there are only 3 types, she can eat one of each type.*/


class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int eat=n/2;
        int c=1;
        sort(candyType.begin(),candyType.end());
        for(int i=0;i<n-1;i++){
            if(candyType[i]!=candyType[i+1]){
                c++;
            }
        }
        cout<< c;
     if(c>=eat || c==0) return eat;
     else
     {
         return c;
     }   
    }
};




/*

leetcode 575- Distribute Candies
https://leetcode.com/problems/distribute-candies/submissions/979211202/

*/
