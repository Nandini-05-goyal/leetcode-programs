class Solution {
public:
    int binary(vector<int> v,int n, int k )
    {
        int mid=0, pos=-1;
        int low=0, high=n-1;
        while(low<=high)
        {
            mid=low+((high-low)/2);
            if(v[mid]==k)
            {
                pos=mid;
                break;
            }
            else if(v[mid]>k)
                high=mid-1;
            else
                low=mid+1;
        }
        while(pos>0)
        {
            if(v[pos-1]==v[pos])
                pos--;
            else
                break;
        }
        return pos;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v(nums);
        vector<int> result;
        sort(v.begin(),v.end());
        for(int x :nums){
            result.push_back(binary(v, v.size(), x));            
        }
        return result;
        
    }
};