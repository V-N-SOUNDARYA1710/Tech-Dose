class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
      int n=encoded.size()+1,a=0;
      for(int i=0;i<=n;i++)
      {
          a^=i;
          if(i<n and (i&1))
              a^=encoded[i];
      }
        vector<int>res={a};
        for(int i:encoded)
            res.push_back(res.back()^i);
        return res;
    }
};
