#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
 vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int,int> mymap;

        if(nums1.size()>=nums2.size())
        {
            for(auto it : nums1)
            {
                mymap[it]++;
            }

            for(auto a : nums2)
            {
                if(mymap[a]>0)
                {
                    v.push_back(a);
                }
                mymap[a]--;
            }
        }

        else
        {
            for(auto it : nums2)
            {
                mymap[it]++;
            }

            for(auto a : nums1)
            {
                if(mymap[a]>0)
                {
                    v.push_back(a);
                }
                mymap[a]--;
            }
        }

        return v;
    }