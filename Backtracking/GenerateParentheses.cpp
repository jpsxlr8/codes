class Solution
{
public:
  vector<string> result;
  void backtrack(string curr, int n, int open, int close)
  {
    if (curr.size() == 2 * n)
      result.push_back(curr);

    if (open < n)
      backtrack(curr + "(", n, open + 1, close);
    if (close < open)
      backtrack(curr + ")", n, open, close + 1);
  }

  vector<string> generateParenthesis(int n)
  {

    backtrack("", n, 0, 0);
    return result;
  }
};