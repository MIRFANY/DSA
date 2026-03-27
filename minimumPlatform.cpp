// optimized version


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find minimum platforms required
    int countPlatforms(int n, int arr[], int dep[]) {
        // Sort the arrival and departure times
        sort(arr, arr + n);
        sort(dep, dep + n);

        // Initialize pointers and counters
        int platforms = 1;
        int result = 1;
        int i = 1, j = 0;

        // Traverse both arrays
        while (i < n && j < n) {
            // If next train arrives before current one departs
            if (arr[i] <= dep[j]) {
                // One more platform needed
                platforms++;
                i++;
            } else {
                // One train departs, platform freed
                platforms--;
                j++;
            }

            // Update maximum required platforms
            result = max(result, platforms);
        }

        return result;
    }
};

int main() {
    int arr[] = {900, 945, 955, 1100, 1500, 1800};
    int dep[] = {920, 1200, 1130, 1150, 1900, 2000};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution obj;
    cout << "Minimum number of Platforms required " 
         << obj.countPlatforms(n, arr, dep) << endl;

    return 0;
}
