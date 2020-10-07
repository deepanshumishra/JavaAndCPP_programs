/*Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where the width of each block is 1. Compute how much water can be trapped in between blocks after raining.
Structure is like below:
| |
|_|
We can trap 2 units of water in the middle gap.



Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. Each test case contains an integer N denoting the size of the array, followed by N space separated numbers to be stored in array.

Output:
Output the total unit of water trapped in between the blocks.

Constraints:
1 <= T <= 100
3 <= N <= 107
0 <= Ai <= 108

Example:
Input:
2
4
7 4 0 9
3
6 9 9

Output:
10
0

Explanation:
Testcase 1: Water trapped by block of height 4 is 3 units, block of height 0 is 7 units. So, total unit of water trapped is 10 units.*/

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,a[100000],left[100000],right[100000];
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>count){
	            count=a[i];
	        }
	        left[i]=count;
	    }
	    count=0;
	    for(int i=n-1;i>=0;i--){
	        if(a[i]>count){
	            count=a[i];
	        }
	        right[i]=count;
	    }
	    long long int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=min(left[i],right[i])-a[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
