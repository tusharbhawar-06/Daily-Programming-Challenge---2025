#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    if (n < 3) return 0;

    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0, water = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax)
                leftMax = height[left];
            else
                water += leftMax - height[left];
            left++;
        } else {
            if (height[right] >= rightMax)
                rightMax = height[right];
            else
                water += rightMax - height[right];
            right--;
        }
    }
    return water;
}

int main() {
    vector<int> h1 = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> h2 = {4,2,0,3,2,5};
    vector<int> h3 = {1,1,1};
    vector<int> h4 = {5};
    vector<int> h5 = {2,0,2};

    cout << "Water trapped = " << trap(h1) << endl; // 6
    cout << "Water trapped = " << trap(h2) << endl; // 9
    cout << "Water trapped = " << trap(h3) << endl; // 0
    cout << "Water trapped = " << trap(h4) << endl; // 0
    cout << "Water trapped = " << trap(h5) << endl; // 2
}
