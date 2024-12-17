#include <bits/stdc++.h>

using namespace std;


class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        set<int> uniqueElements = {};
        for(int i = arr.size() - 1; i >= 0; --i){
            uniqueElements.insert(arr[i]);
        }
        int count = 0, size = uniqueElements.size();
        if(size > 1){
            for(auto x : uniqueElements){
                if(count == size - 2){
                    return x;
                }
                count++;
            }
        }
        else{
            return -1;
        }
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
