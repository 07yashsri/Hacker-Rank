#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {}; 
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if(!result.empty()) {
        cout << "Indices of the two numbers that add up to " << target << " are: "
             << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers add up to the target value." << endl;
    }

    return 0;
}
