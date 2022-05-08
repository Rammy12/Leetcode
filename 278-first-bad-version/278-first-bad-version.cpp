// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int low=1;
        long long int high=n;
        long long int mid;
        long long int result=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(isBadVersion(mid))
            {
                result=mid;
                high=mid-1;
            }
            else
            {
               low=mid+1; 
            }
        }
        return result;
        
    }
};