/*<aside>
💡 **Q8.** You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

**Example 1:**
Input: nums = [1,2,2,4]
Output: [2,3]

</aside>*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array" <<endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter array elements in a sorted manner:" << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int mapi[n+1]= {0};
    int ans[2];
    //mapping occurence of each elements
    for(int i=0; i<n; i++) {
        mapi[arr[i]]++;
    }


    for(int i=1; i<=n; i++) {
        if(mapi[i]==0) ans[0]=i;
        if(mapi[i]==2) ans[1]=i;
    }
    cout << "missing number: "<<ans[0] <<endl;
    cout << "repeated number: "<<ans[1] <<endl;
    return 0;

}
/*
TC-->O(N)
Q.TAG->> FIND MISSING AND REPEATED ELEMENT
*/