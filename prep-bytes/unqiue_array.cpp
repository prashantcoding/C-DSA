// C++ program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find largest
// subarray with no duplicates
int largest_subarray(int a[], int n)
{
	// Stores index of array elements
	unordered_map<int, int> index;
	int ans = 0;
	for (int i = 0, j = 0; i < n; i++) {

		// Update j based on previous
		// occurrence of a[i]
		j = max(index[a[i]], j);
		cout<<j<<endl;
		// Update ans to store maximum
		// length of subarray
		ans = max(ans, i - j + 1);
		cout<<ans<<endl;
		// Store the index of current
		// occurrence of a[i]
		index[a[i]] = i + 1;
		cout<<index[a[i]]<<endl;
	}

	// Return final ans
	return ans;
}

// Driver Code
int32_t main()
{
	int arr[] = { 1, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << largest_subarray(arr, n);
}

