#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int longestb(const string& s)
{

int n = s.length();
vector<vector<int>> dp(n,vector<int> (n,0) ) ;
int maxLength  = 0;
for(int len =2;len<=n;len+=2)
{
    for (int i = 0; i + len - 1 < n; ++i) {
      int j = i + len - 1;
            int mid = (i + j) / 2;
      if (s.substr(i, mid - i + 1) == s.substr(mid + 1, mid - i + 1)) {
                dp[i][j] = len; // Mark the subsequence as beautiful
                maxLength = max(maxLength, dp[i][j]); // Update maximum length
            }
        
    }
}
return maxLength;
}
int main()
{
    string s;
    cin>>s;
    int result = longestb(s);
    cout<<result<<endl;
    
}
