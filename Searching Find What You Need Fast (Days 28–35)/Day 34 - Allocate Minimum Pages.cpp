#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s)
    {
        // Your code here
        map<char, int> freq;
        for (int i = 0; i < s.size(); i++)
            freq[s[i]]++;
        for (auto x : s)
        {
            if (freq[x] == 1)
                return x;
        }
        return '$';
    }
};

int main()
{

    int T;
    cin >> T;

    while (T--)
    {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
