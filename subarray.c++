#include <iostream>
#include <vector>
using namespace std;

vector<int> findSubarrayWithSum(const vector<int>& arr, int targetSum) {
    int n = arr.size();
    vector<int> subarray;

    for (int start = 0; start < n; start++) {
        int currentSum = 0;
        for (int end = start; end < n; end++) {
            currentSum += arr[end];
            if (currentSum == targetSum) {

                subarray.assign(arr.begin() + start, arr.begin() + end + 1);
                return subarray;    ````````        
            }
        }`
    }

    return subarray;
}

int main() {
    vector<int> arr = {1, 4, 20, 3, 10, 5};
    int targetSum = 33;

    vector<int> subarray = findSubarrayWithSum(arr, targetSum);

    if (!subarray.empty()) {
        cout << "Subarray with sum " << targetSum << " is found: ";
        for (int num : subarray) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No subarray with sum " << targetSum << " is found." << endl;
    }

    return 0;
}