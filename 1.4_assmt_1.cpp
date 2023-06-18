/*<aside>
💡 **Q4.** You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

**Example 1:**
Input: digits = [1,2,3]
Output: [1,2,4]

**Explanation:** The array represents the integer 123.

Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

</aside>*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array" <<endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements" << endl;
    for(int k=0; k<n; k++) {
        cin >> arr[k];
    }
    int i;
    for(i=n-1; i>=0; i--) {
        if(i==n-1)
            arr[i]++;
        if(arr[i]==10) {
            arr[i]=0;
            if(i!=0) {
                arr[i-1]++;
            } else {

                arr.push_back(0);
                arr[i]=1;

            }
        }
    }
    cout << "Result After plus one: "<<endl;
    for(int k=0; k<arr.size(); k++) {
        cout <<arr[k] << "";
    }
    return 0;
}
/*

TIME COMPLEXITY---O(N)

QUEST TAG--->PLUS ONE 


*/