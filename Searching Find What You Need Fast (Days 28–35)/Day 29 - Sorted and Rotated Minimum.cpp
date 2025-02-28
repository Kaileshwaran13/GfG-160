#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &arr)
    {
        int minVal = INT_MAX;
        for (int i = 0; i < arr.size(); i++)
            minVal = min(arr[i], minVal);
        return minVal;
    }
};

int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    Solution ob;
    while (t--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num)
        {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}
