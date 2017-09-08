#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int minNumberInRotateArray(vector<int> rotateArray){
        if(rotateArray.size() ==0){
            return 0;
        }
        int low=0;
        int high = rotateArray.size()-1;
        int mid = low;
        while(rotateArray[low] >= rotateArray[high]){

            if (high-low ==1){
                mid = high;
                break;
            }
            mid = (low + high) / 2;
            //cout <<"mid: " << mid <<endl;
            if(rotateArray[low] == rotateArray[mid] && rotateArray[mid] == rotateArray[high]){
                return MinOrder(rotateArray, low, high);
            }

            if(rotateArray[mid] >=rotateArray[low]){
                low = mid;
                //cout << "pre" <<endl;
            }
            else if (rotateArray[mid] <= rotateArray[high]){
                high =mid;
                //cout <<"end"<<endl;
            }
        }
            return rotateArray[mid];
    }
private:
    int MinOrder(vector<int>&num, int low, int high){
        int res = num[low];
        for (int i=low+1; i<high; i++){
            if(num[i] < res){
                res = num[i];
            }
        }
        return res;
    }
};

int main(){
    int a[] = {3,4,5,1,2};
    vector<int> vec(a, a+5);

    Solution solu;
    cout << solu.minNumberInRotateArray(vec) << endl;
    return 0;
}
