#include <iostream>
#include <vector>

class Solution{
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.size()<2)
            return nums.size();

        int index = 2;
        for (int i =0 ; i < nums.size(); i++){
            if (nums[index-2]!= nums[i])
                nums[index++] = nums[i];
        }
        for (int j=0 ; j< index; j++){
            std::cout << nums[j];
        }
        return index;
    }
    int searchVector(const std::vector<int>& nums, int target){
        int first = 0, last =nums.size();
        while(first != last){
            const int mid = first + (last-first)/2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] >= nums[first]){
                if (nums[first]<=target && target <= nums[mid]){
                    last=mid;
                }
                else{
                    first = mid+1;
                }
            }/*
            else{
                if (target >nums[mid] && target <= nums[last-1])
                    first = mid+1;
                else
                    last = mid;
            }*/
        }
        return -1;
        }
};

int main(){
    Solution X;
    int a[6]= {0,1,2,3,4,5};
    std::vector<int> myVector(a,a +6);

    int Y = X.searchVector(myVector,5);
    std::cout <<"\n" << Y;
}
