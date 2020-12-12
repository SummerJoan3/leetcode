class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid = i+(j-i)/2;
            if(nums[mid]==target)return mid;
            if(nums[mid]>target){
                if(nums[j]>nums[mid]){
                    if(nums[j]>target){
                        j=mid-1;
                    }else{
                        i=mid+1;
                    } 
                }else{
                    if(nums[j]<target){  
                        j=mid-1;
                    }else{
                        i=mid+1;
                    } 
                }
            }else{
                if(nums[j]>nums[mid]){
                    if(nums[j]>=target){
                        i=mid+1;
                    }else{
                        j=mid-1;
                    }
                }else{       
                    i=mid+1;
                }
            }
        }
        return -1;
    }
};