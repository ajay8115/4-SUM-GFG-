// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &a, int k)
    {
        int n = a.size();
        sort(a.begin(), a.end());
        vector<vector<int>> ans;

        if (n < 4)
        {
            return ans;
        }

        set<vector<int>> s;
        for (int i = 0; i < n - 3; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                int l = j + 1;
                int r = n - 1;

                while (l < r)
                {
                    int sum = a[i] + a[j] + a[l] + a[r];
                    if (sum == k)
                    {
                        vector<int> tmp = {a[i], a[j], a[l], a[r]};
                        s.insert(tmp);
                        l++;
                        r--;
                    }
                    else if (sum < k)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
            }
        }

        for (auto i : s)
        {
            ans.push_back(i);
        }

        return ans;
    }
};

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &a, int k)
    {
        int n = a.size();
        vector<vector<int>> ans;
        if (n < 4)
        {
            return ans;
        }

        if (n == 4)
        {
            if (a[0] + a[1] + a[2] + a[3] == k)
            {
                vector<int> tmp = {a[0], a[1], a[2], a[3]};
                ans.push_back(tmp);
                return ans;
            }
            else
            {
                return ans;
            }
        }

        sort(a.begin(), a.end());
        set<vector<int>> s;

        for (int i = 0; i < n - 3; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                int left = j + 1, right = n - 1;

                while (left < right)
                {
                    int sum = a[i] + a[j] + a[left] + a[right];
                    if (sum == k)
                    {
                        vector<int> temp = {a[i], a[j], a[left], a[right]};
                        s.insert(temp);
                        left++;
                        right--;
                    }
                    else if (sum < k)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                }
            }
        }

        for (auto i : s)
        {
            ans.push_back(i);
        }

        return ans;
    }
};
