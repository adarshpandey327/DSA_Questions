/*
<aside>
💡 **Question 3**
Given a 2D integer array matrix, return *the **transpose** of* matrix.

The **transpose** of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

**Example 1:**

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]

Output: [[1,4,7],[2,5,8],[3,6,9]]

</aside>
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout << "Enter the nummber of row and coloumns" << endl;
    cin >> m >> n;
    cout << "Enter the elements :"<<endl;
    vector<vector<int>>mat(m,vector<int>(n));
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }
    vector<vector<int>>matn(n,vector<int>(m));
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            swap(matn[i][j],matn[j][i]);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<< mat[i][j] <<" ";
        }
        cout<<endl;
    }

    return 0;
}
