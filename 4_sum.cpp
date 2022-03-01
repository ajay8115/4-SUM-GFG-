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
