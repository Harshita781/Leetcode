class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l = digits.size();
    vector<int> res = digits;

    if (digits[l - 1] == 9)
    {
      res[l - 1] = 0;

      int i = 2;
      while (i < l + 1)
      {
        if (res[l - i] == 9)
        {
          res[l - i] = 0;
        }
        else
        {
          res[l - i] += 1;
          break;
        }
        i++;
      }

      if (res[0] == 0)
      {
        res.insert(res.begin(), 1);
      }
    }
    else
    {
      res[l - 1] += 1;
    }

    return res;
    }
};