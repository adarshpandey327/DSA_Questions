/*
<<aside>
💡 **Question 7**
You are given an m x n matrix M initialized with all 0's and an array of operations ops, where ops[i] = [ai, bi] means M[x][y] should be incremented by one for all 0 <= x < ai and 0 <= y < bi.

Count and return *the number of maximum integers in the matrix after performing all the operations*

**Example 1:**

![q4.jpg](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/4d0890d0-7bc7-4f59-be8e-352d9f3c1c52/q4.jpg)

**Input:** m = 3, n = 3, ops = [[2,2],[3,3]]

**Output:** 4

**Explanation:** The maximum integer in M is 2, and there are four of it in M. So return 4

</aside>
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m1,n1;
    cout << "Enter the m and n:" << endl;
    cin >> m1 >> n1;
    cout << "Enter the opration array size :"<<endl;
    int m,n=2;
    cin>>m;
    cout << "Enter the opration array elements:"<<endl;
    vector<vector<int>>ops(m,vector<int>(n));
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >>ops[i][j];
        }
    }

    int x = m, y = n;
    for (auto i: ops) {
        x = min(x, i[0]);
        y = min(y, i[1]);
    }

    cout << x*y;
    return 0;
}
//https://leetcode.com/problems/range-addition-ii/submissions/982666028/
